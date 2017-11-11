/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Le_main.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:45:40 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/11 19:12:30 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LE_MAIN_H
# define LE_MAIN_H

#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define SUCCESSMSG "Success\n"
#define PRINTFSUCCESS printf("%s", SUCCESSMSG)
#define FAILUREMSG "\e[31mFailure\n"
#define PRINTFFAILURE printf("%s", FAILUREMSG)
#define FILLER 10
#define STRING "la boheme."
#define STRING2 "la bohema."
#define STRINGTOLONG "les sanglots longs des violons de l'automne blessent mon coeur d'une langueur monotone"

void test_ft_memset(void);

#endif
