/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:42:32 by rchahban          #+#    #+#             */
/*   Updated: 2022/10/18 17:00:53 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t beginning(const char *str, const char *set)
{
	// str = hello
	// set = ho
	// let set be fixed and loop through str
	// if set[x] != str[y]
	size_t	x;
	size_t	y;
	size_t	result;
	
	x = 0;
	
	result = 0;
	while (set[x])
	{
		y = 0;
		while (str[y])
		{
			if (set[x] != str[y] && set[x + 1] != '\0')
			{
				break;
			}
			y++;
		}
		if (set[x + 1] == 0)
		{
			result = y;
			break;
		}
		x++;
	}
	return result;
}

static	size_t end(const char *str, const char *set)
{	
	size_t	x;
	size_t	y;
	size_t	z;
	size_t	notFound;
	size_t	result;
	
	notFound = 1;
	x = 1;
	result = 0;
	z = ft_strlen(str) - x;
	while (set[x])
	{
		z = 0;
		while (str[z])
		{
			if (set[x] != str[z])
			{
				break;
			}
			z++;
		}
		if (notFound)
		{
			result = ft_strlen(str) - x;
			break;
		}
		x++;
	}
	return result;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	// get beginning position
	// get end position
	// allocate memory for a string of ( end - beginning ) + 1 (for '\0')
	// copy s1[beginning] to s1[end] to allocated memory

	char	*ptr;
	size_t	startPosition;
	size_t	endPosition;
	size_t	x;
	
	startPosition = beginning(s1, set);
	endPosition = end(s1, set);
	ptr = malloc(sizeof(char) * ((endPosition - startPosition)) + 1);
	if (ptr == 0)
	{
		return ptr;
	}
	x = 0;
	while (startPosition < endPosition)
	{
		ptr[x] = s1[startPosition]; 
		startPosition++;
		x++;
	}
	ptr[x] = '\0';
	return ptr;
}

int main ()
{
	size_t	startPosition;
	size_t	endPosition;
	// size_t	x;

	char s1[] = "hello";
	char set[] = "ho";
	startPosition = beginning(s1, set);
	endPosition = end(s1, set);
	printf("start position: %lu\n", startPosition);
	printf("end position: %lu\n", endPosition);
	printf("%s\n", ft_strtrim(s1, set));
}