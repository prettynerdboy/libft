/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 17:58:27 by soaoki            #+#    #+#             */
/*   Updated: 2024/08/05 00:32:34 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	//走査する文字列が空の時、検索バイトが0の時0を返す//
	if (!haystack && !len)
		return (0);
	//探す文字列が空、走査文字列と検索文字列が完全一致する時haystackを返す//
	if (needle[0] == '\0' || needle == haystack)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		// haystackのi＋j番目がneedleと一致する時jをカウントし、needleが終端に達する時、先頭ポインタ+iしたポインタを返す。//
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (haystack[i + j] == '\0' && needle[j] == '\0')
				// haystackのi+j番目から終端までとneedleのj番目から終端までが完全に一致する時はhaystackのi番目のポインタを返す。//
				return ((char *)&haystack[i]);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		// haystackのi番目がneedleの0番目と一致した時だけjはカウントされる。偽の時はiをカウントする。jをカウントしても終端に達しない時はiをカウントしてjを初期化する。//
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