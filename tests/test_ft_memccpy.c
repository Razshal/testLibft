/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 15:04:23 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/12 15:31:30 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void test_ft_memccpy(void)
{
	char str[] = STRING;
	char str2[] = STRING;
	char strcopy[FILLER];
	char strcopy2[FILLER];

	printf("=== memccpy ===\n");
	memccpy(strcopy, str, 'e', FILLER);
	ft_memccpy(strcopy2, str2, 'e', FILLER);

	if (!memcmp(strcopy, strcopy2, FILLER))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Copie non identique la copie qu'a effectue la fonction originale\n");
	}
		
	if (ft_memccpy(strcopy, STRING, 'z', FILLER) == NULL)
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Ne retourne pas NULL quand le char n'est pas dans la string");
	}
}
