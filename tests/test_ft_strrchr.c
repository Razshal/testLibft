/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:32:09 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/16 17:46:23 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void test_ft_strrchr(void)
{
	PRINTNAME("strrchr");
	if (strrchr(STRING, TESTCHAR) == ft_strrchr(STRING, TESTCHAR))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		EASYTESTFAIL;
	}

	if (strrchr(STRING, '\0') == ft_strrchr(STRING, '\0'))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Ne fonctionne pas avec \\0\n");
	}
}
