/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:36:41 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/13 15:46:26 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	x;
	char	*str2;

	x = 0;
	str2 = (char *)str;
	while (x <= ft_strlen(str2))
	{
		if (str2[x] == c)
		{
			return (&str2[x]);
		}
		x++;
	}
	return (0);
}
