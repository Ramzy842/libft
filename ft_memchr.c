/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:34:33 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/13 07:11:23 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	x;
	char	*str;
	char	l;

	x = 0;
	str = (char *)s;
	l = (unsigned char) c;
	while (x < n)
	{
		if (str[x] == l)
		{
			return (&str[x]);
		}
		x++;
	}
	return (0);
}
