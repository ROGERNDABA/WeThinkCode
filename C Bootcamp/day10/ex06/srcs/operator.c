/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 17:06:08 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/26 17:06:09 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/do_op.h"

int		operator(int a, char b, int c)
{
	if (b == '+')
		return (a + c);
	else if (b == '-')
		return (a - c);
	else if (b == '*')
		return (a * c);
	else if (b == '/')
		return (a / c);
	else if (b == '%')
		return (a % c);
	return (0);
}
