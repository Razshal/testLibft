/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 19:09:32 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/12 14:38:06 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void test_ft_bzero(void)
{
	char str[FILLER + 2];
	char str2[FILLER + 2];

	printf("=== bzero ===\n");
	memset(str, 'a', FILLER + 2);
	memset(str2, 'a', FILLER + 2);
	bzero(str, FILLER);
	ft_bzero(str2, FILLER);

	if (!memcmp(str, str2, FILLER + 2))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Votre bzero ne remplit pas correctement (trop loin/pas assez/pas du tout\n");
	}

	printf("resultat attendu : ligne vide (%d bytes a 0)\nOfficiel :%s\nEtudiant :%s\n", FILLER, str, str2);
}
