/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:35:18 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/14 15:00:33 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t x;
	char *substr;
	
	x = 0;
	substr = malloc((len * sizeof(char)) + 1);
	if (!substr)
	{
		return NULL;
	}
	while (start < ft_strlen(s) && x < len)
	{
		*(substr + x) = s[start + x];
		x++;
	}
	*(substr + x) = '\0';
	return substr;
}