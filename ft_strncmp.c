/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:28:18 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/13 17:49:55 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t length)
{
	size_t	x;
	unsigned char 	*str1;
	unsigned char 	*str2;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	x = 0;
	
	while (x < length && (str1[x] != '\0' || str2[x] != '\0'))
	{
		if (str1[x] != str2[x])
		{
			return (str1[x] - str2[x]);
		}
		x++;
	}
	
	return (0);
}
