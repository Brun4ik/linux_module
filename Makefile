	obj-m := h.o
	KDIR := /home/dmitry/build/linux-5.10.76-1/linux-5.10.76
all:
	$(MAKE) -C $(KDIR) M=$$PWD
