objects = mystring.o test.o

test: $(objects)
	gcc -o test $(objects)

mystring.o: mystring.c
	gcc -c mystring.c
test.o: test.c
	gcc -c test.c

clean:
	del *.o; del *.exe;
