/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:21:26 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/12 16:48:50 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void test_ft_memchr(void)
{
	char src[] = STRING;

	printf("=== memchr ===\n");
	if (memchr(src, TESTCHAR, FILLER))
	{
		if (!memcmp(memchr(src, TESTCHAR, FILLER), 
					ft_memchr(src, TESTCHAR, FILLER), FILLER))
		PRINTFSUCCESS;
		else
		{
			PRINTFFAILURE;
			printf("Resultat different de la fonction originale");
		}
	}
	if (memchr(src, TESTCHARTRAP, FILLER) 
			== ft_memchr(src, TESTCHARTRAP, FILLER))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Mauvaise valeur de retour");
	}
}
