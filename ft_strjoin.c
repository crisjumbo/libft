/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:04:17 by ajumbo            #+#    #+#             */
/*   Updated: 2021/10/14 07:45:27 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dst, char *s1, char *s2, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < len && s1[i])
	{
		if (s1[i])
			dst[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] && i < len)
	{
		dst[i] = s2[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char			*ptr;
	unsigned int	l_total;

	if (!s1 || !s2)
		return (0);
	l_total = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = (char *)malloc(sizeof(char) * l_total);
	if (!ptr)
		return (0);
	ft_strcat(ptr, s1, s2, l_total);
	return (ptr);
}
