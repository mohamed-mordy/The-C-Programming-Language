objects = main.o getop.o stack.o getch.o

calc: $(objects)
	gcc -o calc $(objects)

main.o: main.c calc.h
	gcc -c main.c
getop.o: getop.c calc.h
	gcc -c getop.c
stack.o: stack.c calc.h
	gcc -c stack.c
getch.o: getch.c calc.h
	gcc -c getch.c


.PHONY: clean

clean:
	rm *.exe; rm *.o;
