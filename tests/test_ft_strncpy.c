/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcnpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:22:50 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/17 15:50:47 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void test_ft_strncpy(void)
{
	char src[] = "";
	char dst[FILLER];
	char dst2[FILLER];
	char dst3[FATFILLER];
	char dst4[FATFILLER];

	printf("=== strncpy ===\n");
	if (!memcmp(strncpy(dst3, STRINGFAT, FATFILLER)
				, ft_strncpy(dst4, STRINGFAT, FATFILLER), FATFILLER))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Ne fonctionne pas avec un string basique\n");
	}
	if (!memcmp(strncpy(dst, src, FILLER), ft_strncpy(dst2, src, FILLER), FILLER))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("ne gere pas les src vides\nOfficiel:|%c|\nEtudiant:|%c|\n", dst[9], dst2[9]);
	}
}
