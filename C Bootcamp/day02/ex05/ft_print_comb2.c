/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 12:45:35 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/14 12:45:38 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int		a;
	char	b;
	char	c;

	a = 0;
	while (a < 10000)
	{
		b = a / 100;
		c = a % 100;
		if (b < c)
		{
			if (a != 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(48 + b / 10);
			ft_putchar(48 + b % 10);
			ft_putchar(' ');
			ft_putchar(48 + c / 10);
			ft_putchar(48 + c % 10);
		}
		a++;
	}
}
