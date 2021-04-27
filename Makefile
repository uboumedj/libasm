ASM = nasm
#ld --dynamic-linker /lib/x86_64-linux-gnu/ld-linux-x86-64.so.2 -o test -lc $(O_FILES)
ASMFLAGS = -f elf64
FLAGS = -Wall -Wextra -Werror
NAME = libasm.a
CC = clang

SRC = ft_strlen.s ft_strdup.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s

O_FILES = $(SRC:.s=.o)

STATE = Updated

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(O_FILES)
	@ranlib $(NAME)

%.o: %.s
	@$(ASM) $(ASMFLAGS) $< -o $@
	@ar -rcs $(NAME) $@

test:
	@$(CC) $(FLAGS) $< -o test tests/main.c -Iinclude libasm.a -I .

clean:
	@rm -f $(O_FILES)

fclean: clean
	@rm -f $(NAME) test

re: fclean all