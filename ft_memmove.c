/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 02:02:05 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/23 18:33:10 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst1;
	char	*src1;

	dst1 = (char *)dst;
	src1 = (char *)src;
	if (dst1 > src1)
	{
		while (len)
		{
			dst1[len - 1] = src1[len - 1];
			len--;
		}
		return (dst1);
	}
	return (ft_memcpy(dst1, src1, len));
}
