ifneq ($(KERNELRELEASE),)

obj-m := mod1.o

else 
KDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

default: 
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules
endif

clean:
	rm -rf *mod1.c *.o .*cmd .tmp* *~ Module.symvers

