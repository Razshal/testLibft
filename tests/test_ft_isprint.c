/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 19:02:38 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/14 19:54:59 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void	test_ft_isprint(void)
{
	int i = -5;

	while (i < 500)
	{
		if (ft_isprint(i) != isprint(i))
		{
			PRINTFFAILURE;
			printf("Echec avec la valeur %d, %c", i, i);
		}
		i++;
	}
}
