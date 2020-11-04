TARGET := main
CFLAGS := -Wall -g

SRCS := $(wildcard *.c)
OBJS := $(patsubst %.c, %.o, $(SRCS))

all: $(TARGET)
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
%.o: %.c
	$(CC) $(CFLAGS) -c $<
clean:
	$(RM) -rf $(TARGET) *.o

.PHONY: all clean
