#!/bin/bash
set -e

IMAGE=trezor-mcu-build
TAG=${1:-master}
BINFILE=MeawWallet-mcu/trezor-$TAG.bin
ELFFILE=MeawWallet-mcu/trezor-$TAG.elf

docker build -t $IMAGE .
docker run -t -v $(pwd):/MeawWallet-mcu:z $IMAGE /bin/sh -c "\

	cd MeawWallet-mcu && \
	rm -f *.bin && \
	make -C vendor/libopencm3 && \
	make -C vendor/nanopb/generator/proto && \
	make -C firmware/protob && \
	make && \
	make -C firmware sign && \
	cp firmware/trezor.bin /$BINFILE && \
	cp firmware/trezor.elf /$ELFFILE && \
	rm -f *.o	&& \
	rm -f *.d	&& \
	rm -f firmware/*.d && \
	rm -f firmware/*.o"
