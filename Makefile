CC = gcc
CFLAGS = -Wall -Wextra -g
LIBS = -lncurses

SRCS = exemple_main.c terminalbless.c usual.c

OBJS = $(SRCS:.c=.o)

TARGET = Terminalbless

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

cleanrun: clean
	$(MAKE) run