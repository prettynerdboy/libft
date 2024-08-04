/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 02:05:29 by soaoki            #+#    #+#             */
/*   Updated: 2024/08/05 00:41:59 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)s1;
	s = (unsigned char *)s2;
	if (n > 0)
	{
		while (n-- > 0)
		{
			if (*d - *s != 0)
				return (*d - *s);
			d++;
			s++;
		}
	}
	return (0);
}
int	main(void)
{
	char	test1[20] = "ilove42tokyo";
	char	test2[20] = "iloveshinjyuku";
	char	test3[10] = "abcde";

	printf("memcmp\n");
	printf("%d\n", memcmp(test1, test2, 5));
	printf("%d\n", memcmp(test1, test2, 6));
	printf("%d\n", memcmp(test1, test3, 1));
	printf("ft_memcmp\n");
	printf("%d\n", ft_memcmp(test1, test2, 5));
	printf("%d\n", ft_memcmp(test1, test2, 6));
	printf("%d\n", ft_memcmp(test1, test3, 1));
}
