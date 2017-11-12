/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 15:32:26 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/12 15:59:56 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void test_ft_memmove(void)
{
	char src[] = STRING;
	char dest[FILLER];
	char dest2[FILLER];
	
	printf("=== memmove ===\n");
	memmove(dest, src, FILLER);
	ft_memmove(dest2, src, FILLER);

	if (!memcmp(dest, dest2, FILLER))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Copie non identique a la copie qu'a effectue la fonction originale\n");
	} 
}
