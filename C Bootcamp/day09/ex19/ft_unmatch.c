/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 12:44:06 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/23 12:44:40 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int	i;
	int j;
	int count;

	i = 0;
	count = 1;
	while (i < length)
	{
		j = 0;
		while (j < length)
		{
			if (tab[j] == tab[i] && j != i)
				count++;
			j++;
		}
		if (j == length && count % 2 != 0)
		{
			return (tab[i]);
		}
		count = 1;
		i++;
	}
	return (0);
}
