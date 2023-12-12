CC=gcc

all: factorial client server
	
client: client.c factorial
	$(CC) client.c fndFactorial.o -o client.out

server: server.c fndFactorial
	$(CC) server.c fndFactorial.o -lpthread  -o server.out

factorial: factorial.c factorial.h
	$(CC) -c factorial.c -o factorial.o

clear:
	rm *.o *.out