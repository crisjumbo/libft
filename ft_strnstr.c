/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 10:00:39 by ajumbo            #+#    #+#             */
/*   Updated: 2021/09/30 11:48:27 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strl(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	ft_ncmp(char *s1, char *s2, unsigned int n )
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strnstr(char *haystack, char *needle, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (ft_strl(needle) > size)
		return (0);
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] && i < size)
	{
		if ((i + ft_strl(needle)) > size)
			return (0);
		if (!ft_ncmp(&haystack[i], needle, ft_strl(needle)))
			return (&haystack[i]);
		i++;
	}
	return (0);
}
