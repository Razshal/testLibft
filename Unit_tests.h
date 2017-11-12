/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Unit_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 15:18:03 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/12 18:45:34 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIT_TESTS_H
# define UNIT_TESTS_H

#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define SUCCESSMSG "\e[32m[Success]\e[39m\n"
#define PRINTFSUCCESS printf("%s", SUCCESSMSG)
#define FAILUREMSG "\e[31m[Failure]\e[39m\n"
#define PRINTFFAILURE printf("%s", FAILUREMSG)
#define FILLER 10
#define STRING "la boheme."
#define STRING2 "la bohema."
#define STRINGTOLONG "les sanglots longs des violons de l'automne blessent mon coeur d'une langueur monotone"
#define TESTCHAR 'b'
#define TESTCHARTRAP 'c'

void test_ft_memset(void);
void test_ft_bzero(void);
void test_ft_memcpy(void);
void test_ft_memccpy(void);
void test_ft_memmove(void);
void test_ft_memchr(void);
void test_ft_memcmp(void);

#endif
