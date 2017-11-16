/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:51:26 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/15 17:04:57 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void test_ft_memcmp(void)
{
	char str[] = STRING;
	char str2[] = STRING2;
	char str3[] = "aSADsdsfdsfsdf Gf h fghgfh fgh";
	char str4[] = "aSADsdsfdsfsdf Gf h fghgfh fghXXXXXXXXXXerrADsasZZZZZZ";

	PRINTNAME("memcmp");
	if (memcmp(str, str2, FILLER) == ft_memcmp(str, str2, FILLER))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Crash quand les args sont egaux\n");
	}

	if (memcmp("zyxbcdefgh", "abcdefgxyz", 0) == ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Crash avec un size_t a 0\n");
	}

	if (memcmp((uint8_t *)"la boa", (uint8_t *)"la boa", FILLER) == ft_memcmp((uint8_t *)"la boa", (uint8_t *)"la boa", FILLER))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Crash quand il faut manipuler des unsigned char\n");
	}

	if (memcmp(str3, str4, FILLER) == ft_memcmp(str3, str4, FILLER))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Crash quand le 2eme arg est plus loin dans la table ascii ou plus long\n");
	}
}

