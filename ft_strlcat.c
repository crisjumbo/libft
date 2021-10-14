/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 09:49:26 by ajumbo            #+#    #+#             */
/*   Updated: 2021/10/14 07:43:05 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l1;
	size_t	l2;

	l2 = ft_strlen(src);
	l1 = ft_strlen(dst);
	i = 0;
	if (l1 + 1 > dstsize)
		return (dstsize + l2);
	if (l1 + 1 < dstsize)
	{
		while (src[i] && (l1 + i) < (dstsize - 1))
		{
			dst[l1 + i] = src[i];
			i++;
		}
	}
	dst[l1 + i] = '\0';
	return (l1 + l2);
}
