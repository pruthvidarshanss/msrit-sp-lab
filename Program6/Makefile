CONFIG_MODULE_SIG=n

ifneq	($(KERNELRELEASE),)
obj-m	:= lab6.o 

else
KDIR	:= /lib/modules/$(shell uname -r)/build
PWD	:= $(shell pwd)
default:
	$(MAKE) HOSTCC=x86_64-linux-gnu-gcc-12 CC=x86_64-linux-gnu-gcc-12 -C $(KDIR) M=$(PWD) modules 
	rm -r -f .tmp_versions *.mod.c .*.cmd *.o *.symvers 

clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions *.mod *.order

endif

