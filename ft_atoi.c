/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:03:55 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/24 22:49:21 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	convert_to_num(const char *s, int result, int x)
{
	while (s[x] >= '0' && s[x] <= '9')
	{
		result = result * 10 + s[x] - '0';
		x++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int	x;
	int	result;
	int	sign;

	x = 0;
	sign = 1;
	result = 0;
	if ((str[0] == '-' && str[1] == '+') || (str[0] == '+' && str[1] == '-'))
		return (0);
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == 32)
		x++;
	if (str[x] == '-')
	{
		sign *= -1;
		x++;
	}
	if (str[x] == '+')
	{
		sign *= 1;
		x++;
	}
	result = convert_to_num(str, result, x);
	return (sign * result);
}
