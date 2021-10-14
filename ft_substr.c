/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 11:17:04 by ajumbo            #+#    #+#             */
/*   Updated: 2021/10/02 13:03:06 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			j;
	size_t			i;

	ptr = (char *)malloc((len + 1) * sizeof(*s));
	if (!ptr)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (j < len && i >= start)
		{
			ptr[j] = s[i];
			j++;
		}
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}
