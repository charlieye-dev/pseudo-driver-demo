obj-m += cat.o

all:
	make -C /lib/modules/`uname -r`/build/ M=`pwd`

clean:
	rm -f *.ko *.o *.mod* *.order *.symvers .cat.*
