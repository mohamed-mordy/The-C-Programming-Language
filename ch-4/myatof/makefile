objects = myatof.o main.o

test: $(objects)
	gcc -o test $(objects)

myatof.o: myatof.c
	gcc -c myatof.c

main.o: main.c
	gcc -c main.c

.PHONY: clean
clean:
	rm *.o; rm *.exe;

