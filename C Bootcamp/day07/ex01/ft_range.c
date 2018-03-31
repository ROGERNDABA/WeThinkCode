/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 08:05:50 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/22 08:05:54 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *str;
	int i;
	int len;

	if (min >= max)
	{
		return (NULL);
	}
	i = 0;
	len = max - min;
	str = (int *)malloc(sizeof(min) * len);
	while (i < len)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
