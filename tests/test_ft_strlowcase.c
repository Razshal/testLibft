/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlowcase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:45:27 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/17 15:58:08 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void test_ft_strlowcase(void)
{
	PRINTNAME("strlowcase");
	char *str = "La BoHeMe.";
	if (!strcmp(ft_strlowcase(str), "la boheme."))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		EASYTESTFAIL;
		printf("%s", ft_strlowcase(str));
	}
}
