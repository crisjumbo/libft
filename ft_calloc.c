/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 08:12:02 by ajumbo            #+#    #+#             */
/*   Updated: 2021/10/01 09:44:23 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static void	ft_bzero(void *b, unsigned int n)
{
	unsigned int	i;
	unsigned char	*p;

	i = -1;
	p = b;
	while (n--)
		*p++ = '\0';
}

void	*ft_calloc(unsigned int count, unsigned int size)
{
	void	*ptr;

	ptr = malloc(count * size);
	ft_bzero(ptr, count * size);
	return (ptr);
}
