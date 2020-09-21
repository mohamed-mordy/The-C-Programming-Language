objects = main.o getch.o

count: $(objects)
	gcc -o count $(objects)

main.o: main.c
	gcc -c main.c

getch.o: getch.c
	gcc -c getch.c

.PHONY: clean
clean:
	rm *.o; rm *.exe;

