/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 19:49:08 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/12 20:23:55 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void test_ft_strdup(void)
{
	char *str = strdup(STRING);
	char *str2 = strdup(STRING);
	printf("=== strdup ===\n");
	if (!memcmp(str, str2, FILLER))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Difference\nOfficiel |%s|\nEtdudiant|%s|\n",str,str2);
	}
}
