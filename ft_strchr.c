/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 07:49:15 by ajumbo            #+#    #+#             */
/*   Updated: 2021/09/30 08:07:58 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *s, int c)
{
	unsigned char	chr;
	int				i;

	chr = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == chr)
			return (&s[i]);
		i++;
	}
	if (s[i] == chr)
		return (&s[i]);
	return (0);
}
