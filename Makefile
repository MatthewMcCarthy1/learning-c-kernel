# Define the compiler
CC = gcc

# Define the flags
CFLAGS = -Wall -Wextra -Werror -O2 -g

SRCS = main.c logger.c
TARGET = my_program

all:
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)