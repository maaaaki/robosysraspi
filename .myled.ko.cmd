cmd_/home/ubuntu/myled_ueda/myled.ko := ld -r  -EL  -maarch64elf  --build-id  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds -o /home/ubuntu/myled_ueda/myled.ko /home/ubuntu/myled_ueda/myled.o /home/ubuntu/myled_ueda/myled.mod.o;  true
