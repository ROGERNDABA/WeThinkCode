/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 23:28:57 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/20 23:28:59 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned)s1[i] - (unsigned)s2[i]);
}

void	sort(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
