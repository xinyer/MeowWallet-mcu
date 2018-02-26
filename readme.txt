20180223
1.支持调试打印log；
2.支持比特币的调试网络，需要修改主目录下的vendor/trezor-common/coins.json文件，如果替换为coins-testnet.json，则支持测试网络；
如果使用原始的话，则支持BTC
3. 对设备生成种子初始化/恢复种子都已增加调试信息打印，交易部分暂未增加

20180224:
1.验证layoutpublickey打印公钥
2.打印上层传过来的passphrase
