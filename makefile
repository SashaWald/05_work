  
all: madness.o
	gcc -o madness madness.o

run:
	./madness
	
clean:
	rm *.o
