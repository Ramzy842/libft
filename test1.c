#include "libft.h"


static char	*begin(char const *s1, char const *set)
{
	while (ft_strchr(set, *s1))
	s1++;
	return ((char *)s1);
}

static char	*end(char const *s1, char const *set)
{
	int x;
	int y;
	char 	*beginning;
	beginning = begin(s1, set);
	
	x = 0;
	y = 0;
	while (x < ft_strlen((char *)set))
	{
		while (y < ft_strlen(beginning) - 1)
		{

			y++;
		}
		x++;
	}
}

char *adnan(char const *s1, char const *set)
{
	while (ft_strchr(set, *s1))
	s1++;
	return ((char *)s1);
}



int main()
{
	printf("%s", adnan("hhhhhhhhello","oh"));
	return 0;
}