# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ancandei <ancandei@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 09:21:43 by ancandei          #+#    #+#              #
#    Updated: 2022/11/23 09:21:43 by ancandei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- Makefile -*-

FILES = 

FILES_BONUS =

OBJS = $(FILES:.C=.O)
OBJS_BONUS = $(FILES_BONUS:.C=.O)

CC = cc 
CFLAGS = -Wall -Wextra -Werror
MSG1 = @echo "Compiled ✔︎"
MSG2 = @echo "Cleaned ✔︎"

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
				@ar rcs $(NAME) $(OBJS)
				$(MSG1)

bonus: $(OBJS) $(OBJS_BONUS)
				@ar -rcs $(NAME) $(OBJS) $(OBJS_BONUS)
				$(MSG1)

clean:
				rm -f $(OBJS) $(OBJS_BONUS)
				$(MSG2)
fclean: clean
				rm -f $(NAME)
re: fclean $(NAME)


.PHONY: all, clean, fclean, re, bonus