/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 14:44:20 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/25 14:44:21 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define ODD_MSG    "I have an odd number of arguments. \n"
# define EVEN_MSG "I have an even number of arguments. \n"
# define EVEN(x)  (x % 2 == 0)

typedef	int	t_bool;
#endif
