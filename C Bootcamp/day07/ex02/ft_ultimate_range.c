/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 08:13:00 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/22 08:13:03 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if ((max - min) <= 0)
	{
		*range = (NULL);
		return (0);
	}
	tab = (int*)malloc(sizeof(*tab) * (max - min + 1));
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	tab[i] = '\0';
	*range = tab;
	return (i);
}
