CC := gcc
AR := ar

PWD := $(shell pwd)

CC_INCLUDE := $(PWD)/include

COMMON := $(PWD)/commons

SRC_FILES_COM   := $(foreach n, $(COMMON), $(wildcard $(n)/*.c))
OBJS_COM   := $(SRC_FILES_COM:.c=.o)

$(OBJS_COM) : %.o: %.c
		$(CC) -c -I $(CC_INCLUDE) $< -o $@