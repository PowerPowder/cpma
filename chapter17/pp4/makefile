justify: justify.o word.o line2.o
	gcc -o justify justify.o word.o line2.o

justify.o: justify.c word.h line.h
	gcc -c justify.c

word.o: word.c word.h
	gcc -c word.c

line2.o: line2.c line.h
	gcc -c line2.c
