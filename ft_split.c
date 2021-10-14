/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:33:44 by ajumbo            #+#    #+#             */
/*   Updated: 2021/10/07 11:52:38 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

static unsigned int	ft_strl(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_word_counter(char *s, char c)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			n++;
		i++;
	}
	return (n);
}

char	*ft_word(char *s, char c)
{
	char			*word;
	unsigned int	len;
	unsigned int	j;

	j = 0;
	while (s[j] != c && s[j])
		j++;
	len = j;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (0);
	j = 0;
	while (j < len)
	{
		word[j] = s[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	char			**split;

	split = malloc(sizeof(char *) * (ft_word_counter(s, c) + 1));
	if (!split)
		return (0);
	i = 0;
	j = 0;
	while (i < ft_strl(s))
	{
		if (i == 0 && s[i] != c)
			split[j++] = ft_word(&s[i], c);
		else if ((s[i] == c) && (s[i + 1] != c && s[i + 1]))
		{
			split[j++] = ft_word(&s[i + 1], c);
			if (!split[j])
			{
				while (j <= 0)
					free(split[j--]);
			}
		}
		i++;
	}
	split[j] = 0;
	system("leaks a.out");
	return (split);
}
