/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:34:30 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/16 00:24:15 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;
	char 	*haystack1;
	char 	*needle1;

	x = 0;

	haystack1 = (char *)haystack;
	needle1 = (char *)needle;
	if (!haystack1 && len == 0)
		return 0;
	
	if ((haystack1[x] == '\0' && needle1[x] == '\0'))
	{
		return &haystack1[x];
	}
	if (needle1[x] == '\0')
	{
		return (haystack1);
	}
	y = 0;
	while (haystack1[x+y] != '\0' && x < len)
	{   
		while (x + y < len && haystack1[x+y] == needle1[y])
		{
			y++;
			if (needle1[y] == '\0')
				return (&haystack1[x]);
		}
		x++;
	}
	return (0);
}
/* #include <string.h>
int main ()
{
	// char haystack[] = "hello world";
	// char needle[] = "wo";
	
	printf("%s\n", strnstr(NULL, NULL, 0));
	printf("%s\n", ft_strnstr(NULL, NULL, 0));

	printf("%s\n", strnstr("", "", 0));
	printf("%s\n", ft_strnstr("", "", 0));
} */