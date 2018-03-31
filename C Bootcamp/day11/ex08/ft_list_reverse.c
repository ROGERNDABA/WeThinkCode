/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 18:32:09 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/28 18:32:10 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*tmp;
	t_list	*tmp2;

	list = *begin_list;
	if (!list || !(list->next))
		return ;
	tmp = list->next;
	tmp2 = tmp->next;
	list->next = 0;
	tmp->next = list;
	while (tmp2)
	{
		list = tmp;
		tmp = tmp2;
		tmp2 = tmp2->next;
		tmp->next = list;
	}
	*begin_list = tmp;
}
