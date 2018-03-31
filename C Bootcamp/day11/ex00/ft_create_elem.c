/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 16:07:38 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/28 16:07:43 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list		*newelem;

	newelem = (t_list*)malloc(sizeof(t_list));
	if (newelem)
	{
		newelem->data = data;
		newelem->next = NULL;
	}
	return (newelem);
}
