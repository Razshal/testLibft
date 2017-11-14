/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:29:54 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/14 15:31:16 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void test_ft_strlcat(void)
{
	printf("=== strlcat ===\n");
	char str[500] = STRING;
	char str2[500] = STRING;
	char str3[500] = STRING;
	char str4[500] = STRING;
	size_t res = strlcat(str, STRINGFAT, FILLER + FATFILLER + 1);
	size_t res2 = ft_strlcat(str2, STRINGFAT, FILLER + FATFILLER + 1);
	size_t res3 = strlcat(str3, STRINGFAT, 0);
	size_t res4 = ft_strlcat(str4, STRINGFAT, 0);

	if (!memcmp(str, str2, (FILLER + FATFILLER + 1)))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Ne fonctionne pas avec des arguments basiques\n");
	}
	if (!memcmp(str, str2, (0)))
		PRINTFSUCCESS;

	if (res == res2)
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("La valeur retournee est differente\n");
	}

	if (!memcmp(str3, str4, (FILLER + FATFILLER + 1)))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Ne fonctionne pas avec un size a 0\n");
	}

	if (res3 == res4)
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Probleme de retour avec size = 0\n");
	}
}
