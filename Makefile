# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wgulista <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/23 14:50:14 by wgulista          #+#    #+#              #
#    Updated: 2016/06/23 16:10:37 by wgulista         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CHECKER = checker
LIBFT = ./libft/libft.a
SRC_NAME = 	push_swap.c error.c
OBJ_PATH = obj
SRC_PATH = srcs

CFLAGS = -Wall -Wextra -Werror

OBJ = $(addprefix $(OBJ_PATH)/, $(SRC_NAME:.c=.o))

all: $(CHECKER) $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@gcc $(CFLAGS) -Llibft $(OBJ) -lft -o $(NAME)
	@printf "\r\033[32mCompiling [ $(NAME) ] \033[0m\033[K"

$(CHECKER): $(LIBFT)
	@gcc $(CFLAGS) -c srcs/checker.c
	@gcc $(CFLAGS) -Llibft checker.o -lft -o $(CHECKER)
	@printf "\r\033[32mCompiling [ $(CHECKER) ] \033[0m\033[K"

$(LIBFT):
	@make -C ./libft/

$(addprefix $(OBJ_PATH)/, %.o): $(addprefix $(SRC_PATH)/, %.c)
	@mkdir -p $(OBJ_PATH)
	@gcc $(CFLAGS) -o $@ -c $^
	@printf "\r\033[33mLinking [ $< ] ... \033[0m\033[K"

clean:
	@rm -fv $(OBJ)
	@rm -Rf $(OBJ_PATH)
	@rm -f checker.o
	@make clean -C ./libft/
	@printf "\r\033[31mCleaning [ $(NAME) - $(CHECKER) ] ...\033[0m\033[K"

fclean: clean
	@rm -fv $(NAME) $(CHECKER)
	@make fclean -C ./libft/
	@printf "\r\033[31mDelete [ $(NAME) - $(CHECKER) ] \033[0m\033[K"

re: fclean all

.PHONY: all, clean, fclean, re
