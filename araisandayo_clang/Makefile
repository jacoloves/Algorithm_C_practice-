C = gcc

CFLAGS = -Wall -O2

$@: $(C) $(CFLAGS) $@.c

# stack
stack: pra4_2.o IntStack2.o
	gcc -Wall -O2 -o pra4_2 pra4_2.o IntStack2.o

pra4_2.o: pra4_2.c
	gcc -c pra4_2.c

IntStack2.o: IntStack2.c
	gcc -c IntStack2.c

# Queue
queue: pra4_3.o ArrayIntQueue.o
	gcc -Wall -O2 -o pra4_3 pra4_3.o ArrayIntQueue.o

pra4_3.o: pra4_3.c
	gcc -c pra4_3.c

ArrayIntQueue.o: ArrayIntQueue.c
	gcc -c ArrayIntQueue.c



