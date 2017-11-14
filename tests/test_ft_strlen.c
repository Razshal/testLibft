/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:14:15 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/14 12:38:05 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void test_ft_strlen(void)
{
	int strl = ft_strlen(STRING);
	int ftstrl = strlen(STRING);

	printf("=== strlen ===\n");
	if (strl == ftstrl)
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("ft_strlen ne donne pas le bon resultat\n");
	}

	if (strlen("") == ft_strlen(""))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("ft_strlen ne gere pas les string vides");
	}
}
