/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:30:46 by ajumbo            #+#    #+#             */
/*   Updated: 2021/10/08 10:36:18 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	len;

	len = 0;
	while (s[len])
		len++;
	if (len)
		write(fd, s, len);
	write(fd, "\n", 1);
}
