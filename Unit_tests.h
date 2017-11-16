/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Unit_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 15:18:03 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/16 19:16:38 by mfonteni         ###   ########.fr       */
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
#define EASYTESTFAIL printf("Echec d'un test de fonctionnement basique\n");
#define FILLER 10
#define FATFILLER 86
#define STRING "la boheme."
#define STRING2 "la bohema."
#define STRINGTOLONG "les sanglots longs des violons de l'automne blessent mon coeur d'une langueur monotone"
#define STRINGFAT "les sanglots longs des violons de l'automne blessent mon coeur d'une langueur monotone"
#define TESTCHAR 'b'
#define TESTCHARTRAP 'c'
#define PRINTNAME(name) printf("=== %s ===\n", name)

#define INTMIN "-2147483648"
#define INTMAX "2147483647"

void test_ft_memset(void);
void test_ft_bzero(void);
void test_ft_memcpy(void);
void test_ft_memccpy(void);
void test_ft_memmove(void);
void test_ft_memchr(void);
void test_ft_memcmp(void);
void test_ft_strlen(void);
void test_ft_strdup(void);
void test_ft_strcpy(void);
void test_ft_strncpy(void);
void test_ft_strcat(void);

void test_ft_strlcat(void);

void test_ft_strrchr(void);


void test_ft_strstr(void);
void test_ft_strnstr(void);

void test_ft_strncmp(void);
void test_ft_atoi(void);
void test_ft_isprint(void);

void test_ft_strtrim(void);

void test_ft_itoa(void);
void test_ft_lstmap(void);


#endif
