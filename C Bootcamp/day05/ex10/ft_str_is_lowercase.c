/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 14:27:14 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/19 14:27:17 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_lc(char c)
{
	return (c >= 97 && c <= 122) ? (1) : (0);
}

int		ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(check_lc(*str)))
			return (0);
		str++;
	}
	return (1);
}
