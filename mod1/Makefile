ifneq ($(KERNELRELEASE),)

obj-m := mod1.o mod2.o


else 
KDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

default: 
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules
endif

clean:
	#$(MAKE) -C $(KDIR) SUBDIRS=$(PWD)  clean
	rm -rf  *.o .*cmd .tmp* *~ Module.symvers

