/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:48:32 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/16 17:54:32 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void test_ft_strcpy(void)
{
	PRINTNAME("strcpy");
	char cpy[FILLER + 1];
	char cpy2[FILLER + 1];
	if (!memcmp(strcpy(cpy, STRING), ft_strcpy(cpy2, STRING), FILLER + 1))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		EASYTESTFAIL;
	}
}
