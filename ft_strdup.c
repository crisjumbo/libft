/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:44:56 by ajumbo            #+#    #+#             */
/*   Updated: 2021/10/12 18:09:25 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int	ft_strl(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s1)
{
	unsigned int	len;
	unsigned int	i;
	char			*ptr;

	i = -1;
	len = ft_strl(s1);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (++i < len)
		ptr[i] = s1[i];
	ptr[i] = '\0';
	return (ptr);
}
