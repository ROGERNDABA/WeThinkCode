/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 22:53:12 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/20 23:06:06 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int x;

	i = 0;
	x = argc - 1;
	while (x > 0)
	{
		while (argv[x][i] != '\0')
		{
			ft_putchar(argv[x][i]);
			i++;
		}
		ft_putchar('\n');
		x--;
		i = 0;
	}
	return (0);
}
