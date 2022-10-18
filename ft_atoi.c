/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:03:55 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/15 23:38:33 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		x;
	int		result;
	int		sign;

	x = 0;
	result = 0;
	sign = 1;
	while ((str[x] >= 9 && str[x] <= 13) ||  str[x] == 32)
	{
		x++;
	}
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
	while (str[x] >= '0' && str[x] <= '9')
	{
		result = result * 10 + str[x] - '0';
		x++;
	}
	return (sign * result);
}
