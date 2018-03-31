/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 10:13:15 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/17 10:13:19 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_square(int x, int y, int w, int h)
{
	if (w == 1 && h == 1)
		ft_putchar('A');
	else if (w == x && h == 1)
		ft_putchar('C');
	else if (w == 1 && h == y)
		ft_putchar('A');
	else if (w == x && h == y)
		ft_putchar('C');
	else if (w == 1 || w == x)
		ft_putchar('B');
	else if (h == 1 || h == y)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int w;
	int h;

	h = 1;
	while (h <= y)
	{
		w = 1;
		while (w <= x)
		{
			ft_square(x, y, w, h);
			w++;
		}
		ft_putchar('\n');
		h++;
	}
}
