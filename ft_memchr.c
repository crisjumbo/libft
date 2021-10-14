/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 09:10:13 by ajumbo            #+#    #+#             */
/*   Updated: 2021/09/30 09:41:20 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	chr;
	unsigned char	*p;

	chr = c;
	i = 0;
	p = s;
	while (p[i] && i < n)
	{
		if (p[i] == chr)
			return (&p[i]);
		i++;
	}
	return (0);
}
