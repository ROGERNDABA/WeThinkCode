/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 02:25:14 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/23 02:25:15 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_alert(void)
{
	write(1, "Alert !!!\n", 10);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 != '\0')
		return (*s1);
	if (*s2 != '\0')
		return (-*s2);
	return (0);
}

void	detect(char *str)
{
	if (ft_strcmp(str, "president") == 0)
		ft_alert();
	if (ft_strcmp(str, "attack") == 0)
		ft_alert();
	if (ft_strcmp(str, "powers") == 0)
		ft_alert();
}

void	keep_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] >= 65 && str[x] <= 90)
		{
			str[x] = str[x] + 32;
		}
		x++;
	}
}

int		main(int argc, char **argv)
{
	char	tmp[1000];
	int		x;
	int		y;
	int		z;

	x = 1;
	while (x < argc)
	{
		y = 0;
		z = 0;
		while (argv[x][y])
		{
			if (argv[x][y] != ' ')
			{
				tmp[z] = argv[x][y];
				z++;
			}
			y++;
		}
		tmp[y] = '\0';
		keep_lowercase(tmp);
		detect(tmp);
		x++;
	}
	return (0);
}
