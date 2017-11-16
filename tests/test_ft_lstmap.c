/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:48:48 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/16 17:38:46 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unit_tests.h"

static t_list	*own_ft_lstnew(void const *content, size_t content_size)
{
	t_list*newlist;

	newlist = NULL;
	if (!(newlist = (t_list	*)malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		newlist->content = (void*)ft_strdup(content);
		newlist->content_size = content_size;
	}
	else
	{
		newlist->content = NULL;
		newlist->content_size = 0;
	}
	newlist->next = NULL;
	return (newlist);
}

t_list	*replacer(t_list *lis)
{
	lis->content = STRING;
	lis->content_size = FILLER + 1;
	lis->next = NULL;
	return (lis);
}

void test_ft_lstmap(void)
{
	PRINTNAME("lstmap");
	t_list *testlist = own_ft_lstnew("abc", 4);
	testlist->next = own_ft_lstnew("abcd", 5);
	testlist->next->next = own_ft_lstnew("abcde", 6);

	t_list *restlist = ft_lstmap(testlist, replacer);
	if (
			!strcmp(restlist->content, STRING) && (restlist->content_size == FILLER + 1)
			&& !strcmp(restlist->next->content, STRING) && (restlist->next->content_size == FILLER + 1)
			&& !strcmp(restlist->next->next->content, STRING) && (restlist->next->next->content_size == FILLER + 1)
			&& (restlist->next->next->next == NULL)
		)
		PRINTFSUCCESS;
	else
	{
		PRINTFFAILURE;
		EASYTESTFAIL;
	}
}
