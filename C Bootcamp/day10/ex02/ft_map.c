/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 14:36:02 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/26 14:36:03 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tabn;

	i = 0;
	tabn = (int *)malloc(sizeof(*tab) * length);
	while (i < length)
	{
		tabn[i] = f(tab[i]);
		i++;
	}
	return (tabn);
}
