/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:15:33 by soaoki            #+#    #+#             */
/*   Updated: 2024/04/15 23:26:52 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0'
			&& c <= '9'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", isalnum('a'));
	printf("%d\n", ft_isalnum('0'));
	printf("%d\n", isalnum('0'));
	printf("%d\n", ft_isalnum('-'));
	printf("%d\n", isalnum('-'));
	printf("%d\n", ft_isalnum(' '));
	printf("%d\n", isalnum(' '));
	return (0);
}
