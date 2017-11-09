/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Le_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:25:44 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/08 18:24:29 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"

#define STRING "la boheme."
#define STRING2 "la bohema."

int main(void)
{
	void *b[10];
	void *b2[10];

	char *str_src = STRING;
	char *str_src2 = STRING2;
	
	printf("=== memtest ===\nresultat attendu : 10 fois le char c\nOfficiel :%s\nEtudiant :%s\n", memset(b, 99, (size_t)10), ft_memset(b2, 99, (size_t)10));

	bzero(b, 10);
	ft_bzero(b2, 10);
	printf("=== bzero ===\nresultat attendu : ligne vide (10 bytes a 0)\nOfficiel :%s\nEtudiant :%s\n", (char*)b, (char*)b2);

	printf("=== memcpy ===\nresultat attendu : \"%s\" \nOfficiel :%s\nEtudiant :%s\n", str_src, memcpy(b, str_src, 10), ft_memcpy(b2, str_src, 10));

	printf("=== memccpy ===\nresultat attendu : (null) \nOfficiel :%s\nEtudiant :%s\n", memccpy(b, str_src, 99, 10), ft_memccpy(b2, str_src, 99, 10));

	str_src = "la bohemec";
	printf("resultat attendu : pointeur vers une string vide \nOfficiel :%s\nEtudiant :%s\n", memccpy(b, str_src, 99, 10), ft_memccpy(b2, str_src, 99, 10));
	str_src = STRING; 

	printf("=== memmove === resultat attendu : %s\nOfficiel :%s\nEtudiant :%s\n", str_src, memmove(b, str_src, 10), ft_memmove(b2, str_src, 10));
	
	printf("=== memchr ===\nOfficiel :%s\nEtudiant :%s\n", memchr(str_src, 101, 10), ft_memchr(str_src, 101, 10));
	
	printf("=== memcmp ===\nOfficiel :%d\nEtudiant :%d\n", memcmp(str_src, str_src2, 10), ft_memcmp(str_src, str_src2, 10));
	printf("2eme essai\nOfficiel :%d\nEtudiant :%d\n", memcmp(str_src, str_src, 10), ft_memcmp(str_src, str_src, 10));
	printf("3eme essai\nOfficiel :%d\nEtudiant :%d\n", memcmp(str_src, "la bo", 10), ft_memcmp(str_src, "la bo", 10));
	printf("4eme essai\nOfficiel :%d\nEtudiant :%d\n", memcmp("la boa", "la boz", 10), ft_memcmp("la boa", "la boz", 10));

}
