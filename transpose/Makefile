export LD_LIBRARY_PATH=./:$LD_LIBRARY_PATH
LIB = -L./

all: transpose.cpp transpose.h main.cpp
	g++ -c -Wall -Werror -fpic transpose.cpp
	g++ -shared -o libtrans.so transpose.o
	g++ $(LIB) -Wall -o test main.cpp -ltrans

clean:
	$(RM) test
	$(RM) *.o *.so
