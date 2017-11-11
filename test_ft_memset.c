/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:54:24 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/11 19:08:58 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Unit_tests.h"

void test_ft_memset(void)
{
	void *b[10];
	void *b2[10];

	printf("=== memset ===\nresultat attendu : 10 fois le char c\nOfficiel :%s\nEtudiant :%s\n", memset(b, 99, (size_t)10), ft_memset(b2, 99, (size_t)10));
	printf("Test 2\nOfficiel :%s\nEtudiant :%s\n", memset(b, 99, (size_t)5), ft_memset(b2, 99, (size_t)5));
}
