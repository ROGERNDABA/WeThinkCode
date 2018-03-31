/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 14:34:11 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/25 14:34:14 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_strlen(char *str);
void	ft_putchar(char c);
char	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strrev(char *str);
void	ft_swap(int *a, int *b);

#endif
