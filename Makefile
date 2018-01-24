gameoflife: main.o print_funct.o neighbor_funct.o calculate_funct.o
	gcc -lncurses -o gameoflife main.o print_funct.o neighbor_funct.o calculate_funct.o
main.o: main.c header.h
	gcc -c main.c
print_funct.o: print_funct.c header.h
	gcc -c print_funct.c
neighbor_funct.o: neighbor_funct.c header.h
	gcc -c neighbor_funct.c
calculate_funct.o: calculate_funct.c header.h
	gcc -c calculate_funct.c	
clean:
	rm -f *.o
