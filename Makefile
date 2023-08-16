CC = gcc
CFLAGS = -Wall -Wextra
LIBS = -lncurses

SRCS = main.c terminalbless.c

OBJS = $(SRCS:.c=.o)

TARGET = Terminalbless

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)
%.o: %.c
	$(CC) $(CFLAGS) -c $<

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
