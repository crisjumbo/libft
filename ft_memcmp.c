/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 09:42:05 by ajumbo            #+#    #+#             */
/*   Updated: 2021/09/30 10:00:01 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(void *s1, void *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = s1;
	p2 = s2;
	while ((p1[i] || p2[i]) && i < n)
	{
		if (p1[i] != p2[i])
			return ((unsigned char)p1[i] - (unsigned char)p2[i]);
		i++;
	}
	return (0);
}
