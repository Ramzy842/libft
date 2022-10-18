/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:58:06 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/15 23:27:49 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	char	*src1;
	char	*dst1;
	
	x = 0;
	src1 = (char *)src;
	dst1 = (char *)dst;
	if (ft_strlen(src1) == 0)
	{	
		dst1[0] = '\0';
		return 0;
	}
	if (dstsize <= 0)
	{
		return (ft_strlen(src1));
	}
	while (x < dstsize - 1 && x < ft_strlen(dst))
	{
		dst1[x] = src1[x];
		x++;
	}
	while (x < ft_strlen(dst1))
	{
		dst1[x] = '\0';
		x++;
	}
	return (ft_strlen(src1));
}
#include <string.h>
/* int main()
{
	char dst1[] = "Hello ";
	char src1[] = "World!";
	char dst2[] = "Hello ";
	char src2[] = "World!";
	ft_strlcpy(dst1, src1, 3);
	strlcpy(dst2, src2, 3);
	// ft_strlcpy(NULL, NULL, 3);
	// strlcpy(dst1, src1, 0);
	// ft_strlcpy(dst2, src2, 0);
	// printf("%s\n", dst1);
	// printf("%s\n", dst2);
} */