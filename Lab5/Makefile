CONFIG_MODULE_SIG=n

ifneq	($(KERNELRELEASE),)
obj-m	:= lab5.o

else
KDIR	:= /lib/modules/$(shell uname -r)/build
PWD	:= $(shell pwd)
default:
	$(MAKE) HOSTCC=x86_64-linux-gnu-gcc-11 CC=x86_64-linux-gnu-gcc-12 -C $(KDIR) M=$(PWD) modules 

clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions *.mod *.ko *.order

endif

