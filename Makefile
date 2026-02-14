# Define the compiler
CC = gcc

# Define the flags
CFLAGS = -Wall -Wextra -Werror -O2 -g

# The name of the executable
TARGET = my_program

# The default rule
all:
	$(CC) $(CFLAGS) main.c -o $(TARGET)

# A rule to clean up the folder
clean:
	rm -f $(TARGET)