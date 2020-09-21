objects = main.o io.o mygetline.o  myqsort.o numcmp.o

sortln: $(objects)
	gcc -o sortln $(objects)

numcmp.o: numcmp.c numcmp.h
	gcc -c numcmp.c

main.o: main.c io.h myqsort.h
	gcc -c main.c

io.o: io.c io.h
	gcc -c io.c

mygetline.o: mygetline.c mygetline.h	
	gcc -c mygetline.c

myqsort.o: myqsort.c myqsort.h
	gcc -c myqsort.c

.PHOYN: clean
clean:
	rm *.exe; rm *.o;
