/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:11:19 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/16 17:47:30 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void	test_ft_atoi(void)
{
	PRINTNAME("atoi");

	char *number = "945";
	int atoiRes = atoi(number);
	int ftAtoiRes = ft_atoi(number);

	if (atoiRes == ftAtoiRes)
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		EASYTESTFAIL;
	}
///////////////=================================================
	if (atoi("-26549968") == ft_atoi("-26549968"))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("echec avec un test basique de nombre negatif\n");
	}
///////////////=================================================
	if (atoi(INTMIN) == ft_atoi(INTMIN))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("ne gere pas les int min\n");
	}
///////////////=================================================
	if (atoi(INTMAX) == ft_atoi(INTMAX))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("ne gere pas les int max\n");
	}
}
