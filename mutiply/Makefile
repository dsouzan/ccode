LIB = -L./

all: matrix.cpp matrix.h main.cpp
	g++ -c -Wall -Werror -fpic matrix.cpp
	g++ -shared -o libmult.so matrix.o
	g++ $(LIB) -Wall -o test main.cpp -lmult

clean:
	$(RM) test
	$(RM) *.o *.so
