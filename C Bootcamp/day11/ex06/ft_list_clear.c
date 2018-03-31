/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 18:31:06 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/28 18:31:09 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*victim;

	while (*begin_list)
	{
		victim = *begin_list;
		*begin_list = (*begin_list)->next;
		free(victim);
	}
	*begin_list = NULL;
}
