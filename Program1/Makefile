ifneq ($(KERNELRELEASE),)
	obj-m := kello.o
else
	KERNELDIR := /lib/modules/$(shell uname -r)/build
	PWD := $(shell pwd)
default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

clean:
	rm -r -f .tmp_versions *.mod.c .*.cmd *.cmd *.o *.symvers *.ko *.mod *.order
endif

