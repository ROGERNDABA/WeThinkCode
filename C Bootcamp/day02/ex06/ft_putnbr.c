/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 14:20:25 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/14 15:40:32 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	putst(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int min;
	int max;

	min = -2147483648;
	max = 2147483647;
	if (nb == min)
	{
		putst("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= min && nb <= max)
	{
		if (nb < 10)
		{
			ft_putchar(nb + 48);
			return ;
		}
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
}
