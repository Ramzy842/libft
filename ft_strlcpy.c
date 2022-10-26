/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:58:06 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/24 23:42:21 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	char	*dst1;

	x = 0;
	dst1 = (char *)dst;
	if (ft_strlen(src) == 0)
	{
		dst1[0] = '\0';
		return (0);
	}
	if (dstsize <= 0)
	{
		return (ft_strlen(src));
	}
	while (x < dstsize - 1 && x <= ft_strlen(dst))
	{
		dst1[x] = src[x];
		x++;
	}
	while (x < ft_strlen(dst1))
	{
		dst1[x] = '\0';
		x++;
	}
	return (ft_strlen(src));
}
