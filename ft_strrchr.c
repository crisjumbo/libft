/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 08:08:28 by ajumbo            #+#    #+#             */
/*   Updated: 2021/09/30 08:17:27 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strl(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strrchr(char *s, int c)
{
	unsigned char	chr;
	unsigned int	i;

	chr = c;
	i = ft_strl(s);
	while (i)
	{
		if (s[i] == chr)
			return (&s[i]);
		i--;
	}
	if (s[i] == chr)
		return (&s[i]);
	return (0);
}
