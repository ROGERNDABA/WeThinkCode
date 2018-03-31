/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 16:36:31 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/17 16:36:34 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int x;
	int pnb;

	x = 1;
	pnb = nb;
	if (power == 1)
		return (nb);
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 1)
	{
		while (power != x)
		{
			pnb = pnb * nb;
			x++;
		}
	}
	return (pnb);
}
