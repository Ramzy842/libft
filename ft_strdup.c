/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 06:20:47 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/13 18:51:38 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*p;
	int		x;

	x = 0;
	while (s1[x])
		x++;
	str = malloc(x + 1);
	if (str == 0)
	{
		return (str);
	}
	p = str;
	x = 0;
	while (s1[x])
	{
		p[x] = s1[x];
		x++;
	}
	p[x] = '\0';
	return (str);
}
