/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Le_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:25:44 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/09 19:31:08 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Toi qui voit ce main dont la laideur te petrifie n'aie crainte, 
 * il trouvera la beaute aui lui est due dans quelques jours
 * et si tu te dis "il aurait du etre beau des le debut" je suis d'accord
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../libft/libft.h"

#define STRING "la boheme."
#define STRING2 "la bohema."
#define STRINGTOLONG "les sanglots longs des violons de l'automne blessent mon coeur d'une langueur monotone"
#define MEMALLOCSIZE 25
#define ATOITEST "12354654"
#define ATOITESTNEG "-98654654"


int main(void)
{
	void *b[10];
	void *b2[10];
	char *str_src = STRING;
	char *str_src2 = STRING2;
	char copy[11];
	char copy2[11];
	char copy3[10];
	char copy4[10];
	char lcatstring[32];
	char lcatstring2[32];

	
	printf("=== memtest ===\nresultat attendu : 10 fois le char c\nOfficiel :%s\nEtudiant :%s\n", memset(b, 99, (size_t)10), ft_memset(b2, 99, (size_t)10));

	bzero(b, 10);
	ft_bzero(b2, 10);
	printf("=== bzero ===\nresultat attendu : ligne vide (10 bytes a 0)\nOfficiel :%s\nEtudiant :%s\n", (char*)b, (char*)b2);

	printf("=== memcpy ===\nresultat attendu : \"%s\" \nOfficiel :%s\nEtudiant :%s\n", str_src, memcpy(b, str_src, 10), ft_memcpy(b2, str_src, 10));

	printf("=== memccpy ===\nresultat attendu : (null) \nOfficiel :%s\nEtudiant :%s\n", memccpy(b, str_src, 99, 10), ft_memccpy(b2, str_src, 99, 10));

	str_src = "la bohemec";
	printf("resultat attendu : pointeur vers une string vide \nOfficiel :%s\nEtudiant :%s\n", memccpy(b, str_src, 99, 10), ft_memccpy(b2, str_src, 99, 10));
	str_src = STRING; 

	printf("=== memmove ===\nresultat attendu : %s\nOfficiel :%s\nEtudiant :%s\n", str_src, memmove(b, str_src, 10), ft_memmove(b2, str_src, 10));
	
	printf("=== memchr ===\nOfficiel :%s\nEtudiant :%s\n", memchr(str_src, 101, 10), ft_memchr(str_src, 101, 10));
	
	printf("=== memcmp ===\nOfficiel :%d\nEtudiant :%d\n", memcmp(str_src, str_src2, 10), ft_memcmp(str_src, str_src2, 10));
	printf("2eme essai\nOfficiel :%d\nEtudiant :%d\n", memcmp(str_src, str_src, 10), ft_memcmp(str_src, str_src, 10));
	printf("3eme essai\nOfficiel :%d\nEtudiant :%d\n", memcmp(str_src, "la bo", 10), ft_memcmp(str_src, "la bo", 10));
	printf("4eme essai\nOfficiel :%d\nEtudiant :%d\n", memcmp("la boa", "la boz", 10), ft_memcmp("la boa", "la boz", 10));

	printf("=== strlen ===\nResultat attendu : le nombre de caracteres dans \"%s\"\nOfficiel :%lu\nEtudiant :%lu\n", STRING, strlen(STRING), ft_strlen(STRING));
	
	printf("=== strdup ===\nResultat attendu :%s\nEtudiant :%s\n", strdup(STRING), ft_strdup(STRING));
	
	printf("=== strcpy ===\nResultat attendu :%s\nEtudiant :%s\n", strcpy(copy, STRING), ft_strcpy(copy2, STRING));
	
	printf("=== strncpy ===\nResultat attendu :%s\nEtudiant :%s\n", strncpy(copy3, STRING, 10), ft_strncpy(copy4, STRING, 10));

	char catstring[32];
	char catstring2[32];	
	printf("=== strcat ===\nAttendu  :%s\nEtudiant :%s\n", strcat(catstring, STRING), ft_strcat(catstring2, STRING));
	printf("2eme passe\nAttendu  :%s\nEtudiant :%s\n", strcat(catstring, STRING), ft_strcat(catstring2, STRING));
	printf("case 11 original : %c, case 11 Etudiant %c\n", catstring[11], catstring2[11]);
	printf("case 22 original : %c, case 22 Etudiant %c\n", catstring[22], catstring2[22]);

	printf("=== strncat ===\nOriginal:%s\nEtudiant:%s\n", strncat(catstring, STRING, 5), ft_strncat(catstring2, STRING, 5));
	
	strcat(lcatstring, STRING);
	strcat(lcatstring2, STRING);

	printf("=== strlcat ===\nOriginal:%lu\nEtudiant:%lu\n", strlcat(lcatstring, STRING, 32), ft_strlcat(lcatstring2, STRING, 32));
	printf("Original:%s\nEtudiant:%s\n", catstring, catstring2);
	printf("Original:%c\nEtudiant:%c\n", catstring[30], catstring2[30]);

	printf("=== strchr ===\nOriginal:%s\nEtudiant:%s\n", strchr(catstring, 'b'), ft_strchr(catstring, 'b'));
	
	printf("=== strrchr ===\nOriginal:%s\nEtudiant:%s\n", strrchr(catstring, 'b'), ft_strrchr(catstring, 'b'));
	
	printf("=== strstr ===\nOriginal:%s\nEtudiant:%s\n", strstr(STRINGTOLONG, "coeur"), ft_strstr(STRINGTOLONG, "coeur"));
	printf("=== strnstr ===\nOriginal:%s\nEtudiant:%s\n", strnstr(STRINGTOLONG, "", 100), ft_strnstr(STRINGTOLONG, "", 100));
	printf("Test 2\nOriginal:%s\nEtudiant:%s\n", strnstr(STRINGTOLONG, "coeur", 100), ft_strnstr(STRINGTOLONG, "coeur", 100));

	printf("=== strcmp ===\nOriginal:%d\nEtudiant:%d\n", strcmp(STRINGTOLONG, STRING), ft_strcmp(STRINGTOLONG, STRING));
	
	printf("=== atoi ===\nOriginal:%d\nEtudiant:%d\n", atoi(ATOITEST), ft_atoi(ATOITEST));
	printf("-Negative test\nOriginal:%d\nEtudiant:%d\n", atoi(ATOITESTNEG), ft_atoi(ATOITESTNEG));

	printf("=== isalpha ===\nOriginal:%d\n,Etudiant:%d\n", isalpha('A'), ft_isalpha('A'));
	printf("Test 2\nOriginal:%d\n,Etudiant:%d\n", isalpha('9'), ft_isalpha('9'));

	printf("=== isdigit ===\nOriginal:%d\nEtudiant:%d\n", isdigit('0'), ft_isdigit('0'));
	printf("Test 2\nOriginal:%d\nEtudiant:%d\n", isdigit('a'), ft_isdigit('a'));

	printf("=== isalnum ===\nOriginal:%d\nEtudiant:%d\n", isalnum('1'), ft_isalnum('1'));
	printf("Test 2 \nOriginal:%d\nEtudiant:%d\n", isalnum('1'), ft_isalnum('1'));
	printf("Test 3 \nOriginal:%d\nEtudiant:%d\n", isalnum('j'), ft_isalnum('j'));

	printf("=== iscascii === \nOriginal:%d\nEtudiant:%d\n", isascii(127), ft_isascii(127));
	
	printf("=== isprint === \nOriginal:%d\nEtudiant:%d\n", isprint(127), ft_isprint(127))
		;
	printf("=== toupper === \nOriginal:%c\nEtudiant:%c\n", toupper('A'), ft_toupper('A'));
	printf("=== toupper === \nOriginal:%c\nEtudiant:%c\n", toupper('{'), ft_toupper('{'));
	printf("=== toupper === \nOriginal:%c\nEtudiant:%c\n", toupper('z'), ft_toupper('z'));


	printf("=== tolower === \nOriginal:%c\nEtudiant:%c\n", tolower('A'), ft_tolower('A'));
	printf("=== tolower === \nOriginal:%c\nEtudiant:%c\n", tolower('{'), ft_tolower('{'));
	printf("=== tolower === \nOriginal:%c\nEtudiant:%c\n", tolower('z'), ft_tolower('z'));
	
	printf("=== memalloc ===\n");
	printf("Etudiant: ");
	if (ft_memalloc(15) == NULL)
		printf("failure");
	else
		printf("Success\n");
}
