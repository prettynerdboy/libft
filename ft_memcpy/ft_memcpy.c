/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 17:10:04 by soaoki            #+#    #+#             */
/*   Updated: 2024/08/05 00:04:33 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*c;
	char	*d;

	i = 0;
	c = (char *)dst;
	d = (char *)src;
	while (i < n)
	{
		c[i] = d[i];
		i++;
	}
	return (c);
}

int	main(void)
{
	char	a[10] = "aaaaaaaa";
	char	b[10] = "123456";

	ft_memcpy(a, b, 2);
	printf("%s\n", a);
}
