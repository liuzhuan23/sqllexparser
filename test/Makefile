OBJ=sqlparsertest.o
SOURCE=sqlparsertest.cpp

LIBS := -L../src -lsqlparser -L/usr/lib64 -lglib-2.0
INC:=-I../src -I/usr/include/glib-2.0/ -I/usr/lib64/glib-2.0/include/

BIN := sqlparsertest

CC := gcc

$(BIN): $(OBJ)
	$(CC) -o $@ $< $(LIBS)
	echo "build done"

.PHONY: 
clean:
	$(RM) -rf *.o
	$(RM) -rf core
	$(RM) -rf $(BIN)

%.o: %.c
	$(CC) -c -g -o $@ $< $(INC)

