CONFIG_MODULE_SIG=n

ifneq	($(KERNELRELEASE),)
obj-m	:= lab11.o

else
KDIR	:= /lib/modules/$(shell uname -r)/build
PWD	:= $(shell pwd)
default:
	$(MAKE) HOSTCC=x86_64-linux-gnu-gcc-12 CC=x86_64-linux-gnu-gcc-12 -C $(KDIR) M=$(PWD) modules
clean:
	rm -r -f .tmp_versions *.mod.c .*.cmd *.o *.symvers *.ko *.mod *.order

endif

