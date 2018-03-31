/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 18:30:47 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/28 18:30:49 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*begin;
	t_list	*list;

	if (ac <= 0)
		return (NULL);
	list = ft_create_elem(av[--ac]);
	begin = list;
	while (ac--)
	{
		list->next = ft_create_elem(av[ac]);
		list = list->next;
	}
	return (begin);
}
