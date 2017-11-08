/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Le_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:25:44 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/08 15:11:47 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"

int main(void)
{
	void *b[10];
	void *b2[10];

	char *str_src = "la boheme.";
	
	printf("=== memtest ===\nresultat attendu : 10 fois le char c\nOfficiel :%s\nEtudiant :%s\n", memset(b, 99, (size_t)10), ft_memset(b2, 99, (size_t)10));

	bzero(b, 10);
	ft_bzero(b2, 10);
	printf("=== bzero ===\nresultat attendu : ligne vide (10 bytes a 0)\nOfficiel :%s\nEtudiant :%s\n", (char*)b, (char*)b2);
	
	printf("=== memcpy ===\nresultat attendu : \"%s\" \nOfficiel :%s\nEtudiant :%s\n", str_src, memcpy(b, str_src, 10), ft_memcpy(b2, str_src, 10));
	

}
