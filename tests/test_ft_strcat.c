/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:12:42 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/17 15:52:59 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void	test_ft_strcat(void)
{
	PRINTNAME("strcat");
	char str[32];
	char str2[32];

/* =============== TEST HS ============
	if (!strcmp(strcat(str, STRING), ft_strcat(str2, STRING)))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Fail quand la string de destination est vide ou fail pour test simple");
	}
*/
	if (!strcmp(strcat(str, STRING), ft_strcat(str2, STRING)))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		EASYTESTFAIL;
	}
}
