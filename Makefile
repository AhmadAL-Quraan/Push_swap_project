# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/25 09:49:28 by aqoraan           #+#    #+#              #
#    Updated: 2026/02/26 14:14:24 by aqoraan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


GREEN="\e[32m"
RED="\e[35m"
RESET="\e[0m"

NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror
LIBFT_DIR = Libft-project
LIBFT = $(LIBFT_DIR)/libft.a
# Explicit describe of wildcard --> no *.c by defualt
SRCS = $(wildcard src/parsing-normalization/*.c) \
       $(wildcard src/sorting/*.c) \
       $(wildcard src/operations*.c) \
       src/main.c \
       src/error.c \
       src/1_push-swap-interface.c
OBJS = $(SRCS:.c=.o)
RM = rm -f



all: $(NAME)
# % --> Extend to full path from OBJS
%.o:%.c 
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo -e "$${GREEN}Compiling...$${RESET}"
	@make -C $(LIBFT_DIR) --no-print-directory
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@echo -e "$${RED}Done, try \"make test_100\" or \"make test_500\"$${RESET}"

clean:
	@make -C $(LIBFT_DIR) clean --no-print-directory
	@$(RM) $(OBJS) 

fclean: clean
	@echo -e "$${GREEN}Deleting object files...$${RESET}"
	@make -C $(LIBFT_DIR) fclean --no-print-directory
	@$(RM) $(NAME)
	@$(RM) *.txt
	@echo -e "$${RED}Done$${RESET}"

test_100:
	@shuf -i 0-9999 -n 100 > args.txt
	@./push_swap --bench --adaptive $$(cat args.txt) 2> bench.txt | wc -l
test_500:
	@shuf -i 0-9999 -n 500 > args.txt
	@./push_swap --bench --adaptive $$(cat args.txt) 2> bench.txt | wc -l


re: fclean all

.PHONY: all clean fclean re
