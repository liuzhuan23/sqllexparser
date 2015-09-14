all:
	@(cd src && make)
	@(cd test && make)
	
.PHONY:
clean:
	@(cd src && make clean)
	@(cd test && make clean)
	
