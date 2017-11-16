/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 11:42:04 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/16 13:48:08 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

void test_ft_strtrim(void)
{
	PRINTNAME("strtrim");
	char *str = "\n\t    \n \t \t \n Je suis\n une\t poule\n \t \t\t\t\t\t\n\n\n";
	char *strEmpty = "\n\t    \n \t \t \n \n \t \t\t\t\t\t\n\n\n";
	char *truth = "Je suis\n une\t poule";
	char *trimed = ft_strtrim(str);
	char *trimedEmpty;

	if (!strcmp(truth, trimed))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Resultat excompte:\n|%s|\nVotre resultat:\n|%s|i\n", truth, trimed);
	}
///////////////=================================================
	trimedEmpty = ft_strtrim(strEmpty);
	if (!strcmp(trimedEmpty, ""))
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		printf("Ne fonctionne pas avec une chaine remplie de caraceres a trimer :\n|%s|", trimedEmpty);
	}
}
