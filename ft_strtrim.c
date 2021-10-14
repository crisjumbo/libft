/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 08:49:58 by ajumbo            #+#    #+#             */
/*   Updated: 2021/10/14 07:49:47 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *ft_setzero(char *s1, char *set, unsigned int l1)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	while (l1--)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				s1[i] = '\0';
			if (s1[i] && !set[j + 1])
				return (s1);
			j++;
		}
		i++;
	}
	return (s1);
}

static char *ft_setzero_inv(char *s1, char *set, unsigned int l1)
{
	unsigned int	j;

	while (l1-- >= 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[l1] == set[j])
				s1[l1] = '\0';
			if (s1[l1] && !set[j + 1])
				return (s1);
			j++;
		}
	}
	return (s1);
}

char	*ft_strtrim(char *s1, char *set)
{
	char			*trim;
	unsigned int	l1;
	unsigned int	l2;
	unsigned int	i;
	unsigned int	j;
	char			cij;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(set);
	ft_setzero(s1, set, l1);
	ft_setzero_inv(s1, set, l1);
	i = 0;
	while (i < l1)
	{
		if (s1[i] == '\0')
		{
			j = i + 1;
			while (j < l1)
			{
				if (s1[j] != '\0' && !s1[i])
				{
					cij = s1[i];
					s1[i] = s1[j];
					s1[j] = cij;
				}
				j++;
			}
		}
		i++;
	}

	l1 = ft_strlen(s1);
	trim = (char *)malloc(sizeof(char) * (l1 + 1));
	if (!trim)
		return (0);
	i = 0;
	while (s1[i])
	{
		trim[i] = s1[i];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}
