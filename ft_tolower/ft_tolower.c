/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:13:41 by soaoki            #+#    #+#             */
/*   Updated: 2024/08/05 00:23:10 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	else
		return (c);
}

int	main(void)
{
	char	i;
	char	j;
	char	k;
	char	l;

	i = 65;
	j = tolower(i);
	k = 65;
	l = ft_tolower(k);
	printf("%c:%d\n", i, i);
	printf("%c:%d\n", j, j);
	printf("%c:%d\n", k, k);
	printf("%c:%d\n", l, l);
}
