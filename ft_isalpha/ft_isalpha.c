/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:40:39 by soaoki            #+#    #+#             */
/*   Updated: 2024/04/15 23:13:27 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", isalpha('a'));
	printf("%d\n", ft_isalpha('0'));
	printf("%d\n", isalpha('0'));
	printf("%d\n", ft_isalpha('-'));
	printf("%d\n", isalpha('-'));
	return (0);
}
