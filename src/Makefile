CC=gcc
CFLAGS=-DHAVE_CONFIG_H
LIBS=libsqlparser.so
DFLAGS=
INCLUDE=-I. -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include/ -I/usr/include/mysql/

SOURCE=${wildcard *.c}

OBJS=${patsubst %.c, %.o, $(SOURCE)} 

all:$(OBJS)
	$(CC) -shared -o $(LIBS) $^

%.o:%.c
	$(CC) -c -o $@ $< $(INCLUDE) $(CFLAGS) -fPIC

.PHONY: clean
clean:
	rm -rf *.o
	rm -rf *.so*
