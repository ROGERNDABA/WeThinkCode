/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 22:04:13 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/22 22:04:15 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_bouton(int i, int j, int k)
{
	if (i > j)
	{
		if (j > k)
			return (j);
		else if (i > k)
			return (k);
		else
			return (i);
	}
	else
	{
		if (i > k)
			return (i);
		else if (j > k)
			return (k);
		else
			return (j);
	}
}
