/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:02:51 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/24 23:38:04 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	x;
	size_t	y;

	ptr = malloc(((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char)) + 1);
	if (ptr == 0)
		return (ptr);
	x = 0;
	y = 0;
	while (y < ft_strlen(s1))
	{
		ptr[x] = s1[y];
		x++;
		y++;
	}
	y = 0;
	while (y < ft_strlen(s2))
	{
		ptr[x] = s2[y];
		x++;
		y++;
	}
	ptr[x] = '\0';
	return (ptr);
}
