/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:51:26 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/12 19:20:40 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void test_ft_memcmp(void)
{
	char str[] = STRING;
	char str2[] = STRING2;
	char str3[] = "aSADsdsfdsfsdf Gf h fghgfh fgh";
	char str4[] = "aSADsdsfdsfsdf Gf h fghgfh fghXXXXXXXXXXerrADsasZZZZZZ";

	printf("=== memcmp ===\n");
	if (memcmp(str, str2, FILLER) == ft_memcmp(str, str2, FILLER))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Resultat different de la fonction officielle");
	}

	if (memcmp(str, "\\la\\ bo", FILLER) == ft_memcmp(str, "\\la\\ bo", FILLER))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Crash quand les args sont egaux");
	}

	if (memcmp("la boa", "la boz", FILLER) == ft_memcmp("la boa", "la boz", FILLER))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Crash quand le 2eme arg est plus loin dans la table ascii");
	}

	if (memcmp(str3, str4, FILLER) == ft_memcmp(str3, str4, FILLER))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Crash quand le 2eme arg est plus loin dans la table ascii ou plus long");
	}
	}

