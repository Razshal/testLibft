/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 18:35:19 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/15 19:17:08 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void test_ft_strncmp(void)
{
	PRINTNAME("strncmp");
	char *comp = "abcdefgh";
	char *comp2 = "abcdgfgdfh";
	if (strncmp(comp, comp2, 4) == ft_strncmp(comp, comp2, 4))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("echec d'un test simple\n");
	}
	if (strncmp(STRING, STRINGFAT, 10) == ft_strncmp(STRING, STRINGFAT, 10))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("echec d'un test simple\n");
	}
}
