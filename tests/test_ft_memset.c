/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:54:24 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/12 14:44:53 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../Unit_tests.h"

void test_ft_memset(void)
{
	char str[FILLER];
	char str2[FILLER];
	
	memset(str, 'c', 10);
	ft_memset(str2, 'c', 10);
	printf("=== memset ===\n");

	if(!memcmp(str, str2, FILLER))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Votre memset ne produit pas le resultat du memset officiel:%s\nle votre:%s\n", str, str2);
	}
}
