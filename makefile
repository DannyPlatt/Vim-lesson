CC = gcc
CFLAGS = -g -Wall -std=c99

run:
	$(CC) $(CFLAGS) -o vimLesson vimLesson.c
	./vimLesson
