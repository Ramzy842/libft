/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:49:04 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/24 23:43:51 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	dst_length;
	size_t	src_length;

	x = 0;
	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dstsize == 0)
		return (src_length);
	if (dst_length > dstsize)
		return (src_length + dstsize);
	while (dst_length < dstsize && x < dstsize - dst_length - 1
		&& src[x] != '\0')
	{
		dst[dst_length + x] = src[x];
		x++;
	}
	dst[dst_length + x] = '\0';
	return (dst_length + src_length);
}
