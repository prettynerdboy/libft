/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:34:47 by soaoki            #+#    #+#             */
/*   Updated: 2024/04/15 22:49:26 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", ft_isdigit('0'));
	printf("%d\n", isdigit('0'));
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", isdigit('a'));
	printf("%d\n", ft_isdigit('-'));
	printf("%d\n", isdigit('-'));
	return (0);
}
