/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:36:11 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/13 06:45:36 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	x;
	char	*str;

	x = 0;
	str = (char *)s;
	if (n == 0)
	{
		return ;
	}
	while (x < n)
	{
		str[x] = '\0';
		x++;
	}
}
