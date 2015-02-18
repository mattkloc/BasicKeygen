# Makefile to compile all programs within the current directory

CC= gcc
CFLAGS= -Wall -ansi -std=c89
LDFLAGS= -lm

all: keygen

keygen: keygen.c
	$(CC) $(CFLAGS) $^ -o $@

.PHONY: clean

clean:
	rm keygen

test:
	./keygen
