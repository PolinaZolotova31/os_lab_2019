CC=gcc

all: factorial client server
	
client: client.c factorial
	$(CC) client.c factorial.o -o client.out

server: server.c factorial
	$(CC) server.c factorial.o -lpthread  -o server.out

factorial: factorial.c factorial.h
	$(CC) -c factorial.c -o factorial.o

clear:
	rm *.o *.out