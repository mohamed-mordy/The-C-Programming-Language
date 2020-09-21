objects1 = main.o mygetline.o strindex.o
objects2 = main-extended.o mygetline.o 

find-extended: $(objects2)
	gcc -o find-extended $(objects2)

find: $(objects1)
	gcc -o find $(objects1)

main-extended.o: main-extended.c mygetline.h
	gcc -c main-extended.c

main.o: main.c mygetline.h strindex.h
	gcc -c main.c

mygetline.o: mygetline.c mygetline.h
	gcc -c mygetline.c

strindex.o: strindex.c strindex.h
	gcc -c strindex.c

.PHONY: clean
clean:
	rm *.o; rm *.exe; rm test*;
