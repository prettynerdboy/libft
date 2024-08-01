/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:31:49 by soaoki            #+#    #+#             */
/*   Updated: 2024/06/11 17:12:01 by soaoki           ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int dstsize)
{
	int	i;
	int	len;

	i = 0;
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	len = ft_strlen((char *)src);
	return (len);
}

int	main(void)
{
	char	a[10] = "hello";
	char	b[10] = "world!";
	char	c[10] = "hello";
	char	d[10] = "world!";
	int		len1;
	int		len2;

	len1 = strlcpy(a, b, 3);
	len2 = ft_strlcpy(c, d, 3);
	printf("%d\n", len1);
	printf("%s\n", a);
	printf("%d\n", len2);
	printf("%s\n", c);
}
