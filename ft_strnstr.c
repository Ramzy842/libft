/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:34:30 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/26 01:43:40 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;
	size_t	z;

	x = 0;
	if (!haystack && len == 0)
		return (0);
	if ((haystack[x] == '\0' && needle[x] == '\0'))
		return ((char *)(haystack + x));
	if (needle[x] == '\0')
		return ((char *)(haystack));
	while (haystack[x] != '\0' && x < len)
	{
		y = 0;
		z = x;
		while (haystack[z] == needle[y] && z < len)
		{
			if (needle[y + 1] == '\0')
				return ((char *)(haystack + x));
			y++;
			z++;
		}
		x++;
	}
	return (0);
}
