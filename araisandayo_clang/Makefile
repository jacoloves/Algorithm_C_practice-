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
queue: pra4_4.o IntQueue.o
	gcc -Wall -O2 -o pra4_4 pra4_4.o IntQueue.o

pra4_4.o: pra4_4.c
	gcc -c pra4_4.c
IntQueue.o: IntQueue.c
	gcc -c IntQueue.c

# recur
recur: pra5_4.o IntStack3.o
	gcc -Wall -O2 -o pra5_4 pra5_4.o IntStack3.o

pra5_4.o: pra5_4.c
	gcc -c pra5_4.c

IntStack3.o: IntStack3.c
	gcc -c IntStack3.c

# Hanoi
hanoi: pra5_6.o IntStack3.o
	gcc -Wall -O2 -o pra5_6 pra5_6.o IntStack3.o

pra5_6.o: pra5_6.c
	gcc -c pra5_6.c


#quicksort
qi: pra6_14.o IntStack.o
	gcc -Wall -O2 -o pra6_14 pra6_14.o IntStack.o

pra6_14.o: pra6_14.c
	gcc -c pra6_14.c

IntStack.o: IntStack.c
	gcc -c IntStack.c

#quick2
qi2: pra6_16b.o IntStack.o
	gcc -Wall -O2 -o pra6_16b pra6_16b.o IntStack.o

pra6_16b.o: pra6_16b.c
	gcc -c pra6_16b.c

#quick3
qi3: pra6_17b.o IntStack.o
	gcc -Wall -O2 -o pra6_17b pra6_17b.o IntStack.o

pra6_17b.o: pra6_17b.c
	gcc -c pra6_17b.c

#quick4
qi4: pra6_18b.o IntStack.o
	gcc -Wall -O2 -o qi4 pra6_18b.o IntStack.o

pra6_18b.o: pra6_18b.c
	gcc -c pra6_18b.c

#bit
bit: BitSetTest.o BitSet.o
	gcc -Wall -O2 -o bit BitSetTest.o BitSet.o

BitSetTest.o: BitSetTest.c
	gcc -c BitSetTest.c

BitSet.o: BitSet.c
	gcc -c BitSet.c
