/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 22:53:01 by soaoki            #+#    #+#             */
/*   Updated: 2024/08/05 00:43:13 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char *p;

	if (s == "\0")
		n = 0;
	else if (n < 0)
		n = ft_strlen(s);
	if ((p = (char *)malloc(n + 1)) == "\0")
		return ("\0");
	ft_strncpy(p, s, n);
	p[n] = 0;
	return (p);
}