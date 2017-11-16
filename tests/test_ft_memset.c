/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:54:24 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/16 17:57:32 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../Unit_tests.h"

void test_ft_memset(void)
{
	PRINTNAME("memset");
	char str[FILLER * 2];
	char str2[FILLER * 2];
	
	memset(str, 'c', FILLER * 2);
	ft_memset(str2, 'c', FILLER * 2);

	if(!memcmp(str, str2, FILLER))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		EASYTESTFAIL;
	}
}
