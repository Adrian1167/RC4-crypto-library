all: arcfour example

example: example.o
	gcc example.o -o example -Wall -O2

example.o: example.c
	gcc -c -Wall -O2 example.c

arcfour: arcfour.o
	gcc arcfour.o -o arcfour.so -Wall -O2 -fPIC -shared -ldl -D_GNU_SOURCE

arcfour.o: arcfour.c
	gcc -c -Wall -O2 arcfour.c

clean:
	rm -f *.o *.so example