/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:39:28 by soaoki            #+#    #+#             */
/*   Updated: 2024/08/04 23:59:00 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", isascii('a'));
	printf("%d\n", ft_isascii(0x82));
	printf("%d\n", isascii(0x82));
	printf("%d\n", ft_isascii(1000));
	printf("%d\n", isascii(1000));
}
