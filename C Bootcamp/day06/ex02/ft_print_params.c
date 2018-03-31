/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 23:15:24 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/20 23:15:27 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int ac, char **av)
{
	int i;
	int j;

	if (ac)
	{
		i = 1;
		j = 0;
		while (i < ac)
		{
			while (av[i][j])
			{
				ft_putchar(av[i][j]);
				j++;
			}
			ft_putchar('\n');
			j = 0;
			i++;
		}
	}
	return (0);
}
