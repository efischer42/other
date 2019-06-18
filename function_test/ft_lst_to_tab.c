/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 11:44:38 by efischer          #+#    #+#             */
/*   Updated: 2019/06/18 12:07:30 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../env_blt/test.h"

char	**ft_lst_to_char_tab(t_list *lst, char *(*f)(t_list *))
{
	char	**tab;
	char	*tmp;
	size_t	lst_len;
	size_t	i;

	if (lst == NULL || f == NULL)
		return (NULL);
	i = 0;
	lst_len	= ft_lstlen(lst);
	tab = (char**)malloc(sizeof(char*) * (lst_len + 1));
	if (tab == NULL)
		return (NULL);
	while (lst != NULL)
	{
		tmp = f(lst);
		tab[i] = ft_strdup(tmp);
		lst = lst->next;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
