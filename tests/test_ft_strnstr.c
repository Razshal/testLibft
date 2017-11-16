/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:17:24 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/15 18:24:08 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void test_ft_strnstr(void)
{
	PRINTNAME("strnstr");
	
	if (ft_strnstr(STRINGFAT, "violons", FATFILLER) ==  strnstr(STRINGFAT, "violons", FATFILLER))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("probleme avec un argument simple\n");
	}

	if (ft_strnstr(STRINGFAT, "violonss", 90) ==  strnstr(STRINGFAT, "violonss", 90))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("probleme quand la comparaison est trop longue ou piege\n");
	}
	
	if (ft_strnstr("lorem ipsum dolor sit amet", "sit", 10) == strnstr("lorem ipsum dolor sit amet", "sit", 10))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("probleme quand la comparaison arrive sur le debut de needle\n");
	}
}
