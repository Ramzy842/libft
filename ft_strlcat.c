/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:49:04 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/15 21:28:59 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	char	*src1;
	size_t	srcLen;

	x = 0;
	if (!dst && dstsize == 0)
		return 0;
	while (*dst && dstsize > 0)
	{
		dst++;
		x++;
		dstsize--;
	}
	src1 = (char *)src;
	srcLen = ft_strlen(src1);
	while (*src1 && dstsize-- > 1)
	{
		*dst++ = *src1++;
	}
	if (dstsize == 1 || src1[x] == '\0')
	{
		dst[x] = '\0';
	}
	return (srcLen + x);
}
