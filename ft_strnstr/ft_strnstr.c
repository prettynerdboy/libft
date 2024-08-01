/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 17:58:27 by soaoki            #+#    #+#             */
/*   Updated: 2024/08/02 01:58:00 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *str, const char *to_find, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!str && !len)
		return (0);
	if (to_find[0] == '\0' || to_find == str)
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < len)
		{
			if (str[i + j] == '\0' && to_find[j] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		if (to_find[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (0);
}

int	main(void)
{
	char test1[10] = "abcdefg";
	char value1[10] = "bc";
	char value2[10] = "";
	char *r;
	char *d;

	r = ft_strnstr(test1, value1, 3);
	d = ft_strnstr(test1, value2, 3);
	printf("%s\n", r);
	printf("%s\n", d);
}