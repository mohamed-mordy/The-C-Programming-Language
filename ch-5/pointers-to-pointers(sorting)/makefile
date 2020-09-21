objects = main.o io.o mygetline.o  qsort.o

sortln: $(objects)
	gcc -o sortln $(objects)

main.o: main.c io.h qsort.h
	gcc -c main.c

io.o: io.c io.h
	gcc -c io.c

mygetline.o: mygetline.c mygetline.h	
	gcc -c mygetline.c

qsort.o: qsort.c qsort.h
	gcc -c qsort.c

.PHOYN: clean
clean:
	rm *.exe; rm *.o;
