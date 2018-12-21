OBJS = main.o node.o 
CC = gcc
CFLAGS = -Wall -c
LFLAGS = -Wall
NAME = test


all: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS)  -o $(NAME)
main.o : main.c node.h
	$(CC) $(CFLAGS) main.c
node.o : node.c node.h
	$(CC) $(CFLAGS) node.c
clean : 
	\rm *.o $(NAME)
