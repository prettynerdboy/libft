/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:08:42 by soaoki            #+#    #+#             */
/*   Updated: 2024/08/04 23:52:23 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*dest;

	i = 0;
	dest = (unsigned char *)s;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
}
// int	main(void)
// {
// 	char	s1[10] = "abcdefg";
// 	char	s2[10] = "abcdefg";

// 	printf("%s\n", bzero(s1, 1));
// 	ft_bzero(s2, 1);
// 	printf("%s\n", s2);
// }
