# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 14:46:17 by mfonteni          #+#    #+#              #
#    Updated: 2017/11/12 14:17:07 by mfonteni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBPATH = ../libft
TESTPATH = tests/
NAME = Unit_tests

all: buildtests clean

buildtests:
	gcc -Wall -Wextra -Werror Unit_tests.c tests/*.c ../libft/*.c
#	@gcc -o $(NAME) -Wall -Wextra -Werror $(NAME).c $(TESTPATH)*.c -L$(LIBPATH) -lft
	
clean:
	@rm -f $(NAME).h.gch

fclean: clean
	@rm -f a.out

re: fclean all
	
