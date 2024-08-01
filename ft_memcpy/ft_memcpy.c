/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 17:10:04 by soaoki            #+#    #+#             */
/*   Updated: 2024/06/09 17:46:26 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
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
