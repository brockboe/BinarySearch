CC = gcc
CFLAGS = -Wall -Werror

binsearch : main.c
	$(CC) $(CFLAGS) main.c binsearch.c -o binsearch
clean :
	\rm binsearch
