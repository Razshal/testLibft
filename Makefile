# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 14:46:17 by mfonteni          #+#    #+#              #
#    Updated: 2017/11/11 18:32:03 by mfonteni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PATH = ../libft/
NAME = Unit_tests

all: build clean

build:
	@cd $(PATH) make re
	@gcc -Wall -Wextra -Werror $(NAME).h $(NAME).c $(PATH)libft.a

clean: 
	@rm -f $(NAME).h.gch

fclean: clean
	@rm -f a.out 
	
