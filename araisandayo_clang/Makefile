C = gcc

CFLAGS = -Wall -O2

$@: $(C) $(CFLAGS) $@.c

# stack用
stack: pra4_1.o IntStack.o
	gcc -Wall -O2 -o pra4_1 pra4_1.o IntStack.o

pra4_1.o: pra4_1.c
	gcc -c pra4_1.c

IntStack.o: IntStack.c
	gcc -c IntStack.c



