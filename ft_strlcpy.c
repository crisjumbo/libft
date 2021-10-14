/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:51:23 by ajumbo            #+#    #+#             */
/*   Updated: 2021/10/02 11:07:04 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strl(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_strlcpy(char *dst, char *src, unsigned int dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < (dstsize - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strl(src));
}
