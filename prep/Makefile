CC = gcc
CFLAGS = -Wall -g
SRC_DIR = src
BIN_DIR = bin

SRCS = $(wildcard $(SRC_DIR)/*.c)
TARGETS = $(patsubst $(SRC_DIR)/%.c, %, $(SRCS))

.PHONY: all clean $(TARGETS)

all: $(TARGETS)

$(TARGETS):
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $(SRC_DIR)/$@.c -o $(BIN_DIR)/$@
	@echo "Running $@ ..."
	@./$(BIN_DIR)/$@

clean:
	rm -f $(BIN_DIR)/*
