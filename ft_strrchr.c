/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:05:17 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/23 18:37:39 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	y;
	char	*s1;

	s1 = (char *)str;
	if (c == 0)
	{
		return (&s1[ft_strlen(s1)]);
	}
	y = 1;
	while (s1[ft_strlen(s1) - y] && y <= ft_strlen(s1))
	{
		if (s1[ft_strlen(s1) - y] == c || s1[ft_strlen(s1) - y] + 256 == c)
		{
			return (&s1[ft_strlen(s1) - y]);
		}
		y++;
	}
	return (NULL);
}
