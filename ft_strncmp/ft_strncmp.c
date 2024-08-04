/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 02:01:16 by soaoki            #+#    #+#             */
/*   Updated: 2024/08/05 00:38:12 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", strncmp("Hello", "HelloWorld", 12));
	printf("%d\n", strncmp("iloveshinjyuku", "ilove42", 6));
	printf("%d\n", strncmp("ilove42", "iloveshinjyuku", 6));
	printf("\n");
	printf("%d\n", ft_strncmp("Hello", "HelloWorld", 12));
	printf("%d\n", ft_strncmp("iloveshinjyuku", "ilove42", 6));
	printf("%d\n", ft_strncmp("ilove42", "iloveshinjyuku", 6));
	return (0);
}
