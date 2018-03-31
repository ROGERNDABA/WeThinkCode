/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 08:50:08 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/27 08:50:08 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_swap(char **tab, int i, int ac, int null)
{
	tab[null] = tab[i];
	tab[i] = tab[ac];
	tab[ac] = tab[null];
	tab[null] = NULL;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int ac;
	int i;
	int null;

	ac = 0;
	while (tab[ac] != NULL)
		ac++;
	null = ac;
	ac--;
	while (ac > 0)
	{
		i = ac - 1;
		while (i >= 0)
		{
			if (cmp(tab[i], tab[ac]) > 0)
				ft_swap(tab, i, ac, null);
			i--;
		}
		ac--;
	}
}
