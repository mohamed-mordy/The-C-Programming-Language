out: main.o strlen.o
	gcc -o out main.o strlen.o

main.o: main.c strlen.h
	gcc -c main.c

strlen.o: strlen.c strlen.h
	gcc -c strlen.c
.PHONY: clean
clean:
	rm *.o; rm *.exe;
