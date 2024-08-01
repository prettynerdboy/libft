/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:02:47 by soaoki            #+#    #+#             */
/*   Updated: 2024/06/15 17:41:41 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != 0)
		i++;
	return (i);
}

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	int		i;
	int		len;
	char	*src;

	i = 0;
	src = (char *)s;
	len = ft_strlen(src) + 1;
	if (c == '\0')
		return (&src[len]);
	else
	{
		while (src[i] != '\0' && i < n)
		{
			if (src[i] == c)
				return (src + i);
			i++;
		}
		return (0);
	}
}

int	main(void)
{
	char	test1[10] = "abcde";
	char	test2[10] = "abcde";

	printf("memchr\n");
	printf("%s\n", memchr(test1, 'c', 2));
	printf("%s\n", memchr(test1, 'a', 2));
	printf("%s\n", memchr(test1, 'c', 3));
	printf("%s\n", memchr(test1, 'z', 5));
	printf("ft_memchr\n");
	printf("%s\n", ft_memchr(test1, 'c', 2));
	printf("%s\n", ft_memchr(test1, 'a', 2));
	printf("%s\n", ft_memchr(test1, 'c', 3));
	printf("%s\n", ft_memchr(test1, 'z', 5));
}
