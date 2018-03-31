/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 18:34:02 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/28 18:34:03 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;
	t_list	*victim;

	tmp = begin_list;
	while (tmp)
	{
		if (cmp(tmp->data, data_ref) == 0)
		{
			victim->next = tmp->next;
			free(tmp);
			tmp = victim;
		}
		else
			victim = tmp;
		tmp = tmp->next;
	}
}
