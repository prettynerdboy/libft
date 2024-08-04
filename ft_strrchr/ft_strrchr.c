/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 01:17:11 by soaoki            #+#    #+#             */
/*   Updated: 2024/08/05 00:33:23 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>


char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*src;

	i = 0;
	src = (char *)s;
	len = ft_strlen(src);
	if (c == '\0')
		return (&src[len]);
	else
	{
		while (i != len + 1)
		{
			if (src[len - i] == c)
				return (&src[len - i]);
			i++;
		}
		return (0);
	}
}

int	main(void)
{
	char	test1[20] = "ilove42tokyo";
	char	test2[20] = "ilove42tokyo";

	printf("%s\n", strrchr(test1, 'i'));
	printf("%s\n", strrchr(test1, '\0'));
	printf("%s\n", strrchr(test1, 101));
	printf("%s\n", strrchr(test1, 'h'));
	printf("%s\n", ft_strrchr(test2, 'i'));
	printf("%s\n", ft_strrchr(test2, '\0'));
	printf("%s\n", ft_strrchr(test2, 101));
	printf("%s\n", ft_strrchr(test2, 'h'));
}
