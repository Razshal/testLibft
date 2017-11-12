/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 14:50:13 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/12 15:23:44 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void test_ft_memcpy(void)
{
	char str[FILLER];
	char strcopy[FILLER];
	char str2[FILLER];
	char strcopy2[FILLER];
	
	printf("=== memcpy ===\n");
	memset(str, 'a', FILLER);
	memset(str2, 'a', FILLER);
	memcpy(strcopy, str, FILLER);
	ft_memcpy(strcopy2, str2, FILLER);

	if (!memcmp(strcopy, strcopy2, FILLER))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Copie non identique la copie qu'a effectue la fonction originale\n");
	}
}
