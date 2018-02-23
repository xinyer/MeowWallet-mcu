#!/bin/bash
set -e

IMAGE=trezor-mcu-build
TAG=${1:-master}
BINFILE=build/trezor-$TAG.bin
ELFFILE=build/trezor-$TAG.elf

docker build -t $IMAGE .
docker run -t -v $(pwd)/build:/build:z $IMAGE /bin/sh -c "\
	git clone https://github.com/trezor/trezor-mcu && \
	cd trezor-mcu && \
	git checkout $TAG && \
	git submodule update --init && \
	make -C vendor/libopencm3 && \
	make -C vendor/nanopb/generator/proto && \
	make -C firmware/protob && \
	make && \
	make -C firmware sign && \
	cp firmware/trezor.bin /$BINFILE && \
	cp firmware/trezor.elf /$ELFFILE && \
	rm -f *.o"


