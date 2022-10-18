/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:02:51 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/15 23:22:30 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	char	*str1;
	char	*str2;
	size_t	x;
	size_t	y;
	
	str1 = (char *)s1;
	str2 = (char *)s2;
	ptr = malloc(((ft_strlen(str1) + ft_strlen(str2)) * sizeof(char)) + 1);
	
	x = 0;
	y = 0;
	while (y < ft_strlen(str1))
	{
		ptr[x] = str1[y];
		x++;
		y++;
	}
	y = 0;
	
	while (y < ft_strlen(str2))
	{
		ptr[x] = str2[y];
		x++;
		y++;
	}
	ptr[x] = '\0';
	return ptr;
}
