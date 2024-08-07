/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:58:59 by soaoki            #+#    #+#             */
/*   Updated: 2024/08/05 00:22:53 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
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

	i = 97;
	j = toupper(i);
	k = 97;
	l = ft_toupper(k);
	printf("%c:%d\n", i, i);
	printf("%c:%d\n", j, j);
	printf("%c:%d\n", k, k);
	printf("%c:%d\n", l, l);
}
