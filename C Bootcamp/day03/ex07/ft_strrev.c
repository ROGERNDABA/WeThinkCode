/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 08:39:45 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/15 08:39:47 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char *end;
	char *start;
	char z;

	start = str;
	end = str;
	z = '0';
	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (end > start)
	{
		z = *end;
		*end = *start;
		*start = z;
		start++;
		end--;
	}
	return (str);
}
