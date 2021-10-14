/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 08:45:12 by ajumbo            #+#    #+#             */
/*   Updated: 2021/10/08 09:45:38 by ajumbo           ###   ########.fr       */
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

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	char			*new_string;
	unsigned int	len;
	unsigned int	i;

	len = ft_strl(s);
	new_string = malloc(sizeof(char) * (len + 1));
	if (!new_string)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_string[i] = f(i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
