/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 12:49:43 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/15 12:55:24 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void test_ft_itoa(void)
{
	PRINTNAME("itoa");
	if (!strcmp(ft_itoa(-245), "-245"))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("ne fonctionne pas avec des arguments basiques\n");
	}
}
