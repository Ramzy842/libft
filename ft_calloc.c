/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 04:35:06 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/23 18:30:49 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		x;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	x = 0;
	ptr = malloc(count * size);
	if (ptr == 0)
	{
		return (ptr);
	}
	ft_bzero(ptr, count * size);
	return (ptr);
}
