/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 18:34:21 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/28 18:34:27 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *tmp;

	tmp = *begin_list1;
	if (*begin_list1 == NULL)
		*begin_list1 = begin_list2;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = begin_list2;
	}
}
