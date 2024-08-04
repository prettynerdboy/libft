/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 00:54:37 by soaoki            #+#    #+#             */
/*   Updated: 2024/08/05 00:07:55 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
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
		while (src[i] != '\0')
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
	char	test1[20] = "ilove42tokyo";
	char	test2[20] = "ilove42tokyo";

	printf("%s\n", strchr(test1, '4'));
	printf("%s\n", strchr(test1, '\0'));
	printf("%s\n", strchr(test1, 101));
	printf("%s\n", strchr(test1, 'h'));
	printf("%s\n", ft_strchr(test2, '4'));
	printf("%s\n", ft_strchr(test2, '\0'));
	printf("%s\n", ft_strchr(test2, 101));
	printf("%s\n", ft_strchr(test2, 'h'));
}
