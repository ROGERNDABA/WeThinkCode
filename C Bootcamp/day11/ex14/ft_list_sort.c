/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 18:34:51 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/28 18:34:52 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap_elem(t_list **elem1, t_list **elem2)
{
	void	*tmp_data;

	tmp_data = (*elem1)->data;
	(*elem1)->data = (*elem2)->data;
	(*elem2)->data = tmp_data;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*tmp1;
	t_list	*tmp2;
	int		sort;

	sort = 1;
	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	while (sort)
	{
		sort = 0;
		tmp1 = *begin_list;
		tmp2 = tmp1->next;
		while (tmp2)
		{
			if (cmp(tmp1->data, tmp2->data) > 0)
			{
				ft_swap_elem(&tmp1, &tmp2);
				sort = 1;
			}
			tmp1 = tmp1->next;
			tmp2 = tmp1->next;
		}
	}
}
