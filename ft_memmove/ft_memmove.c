/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:12:16 by soaoki            #+#    #+#             */
/*   Updated: 2024/06/09 18:21:18 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*c;
	char	*d;

	i = 0;
	c = (char *)dest;
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

	memmove(a, b, 2);
	printf("%s\n", a);
}
