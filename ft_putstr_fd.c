/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:25:34 by ajumbo            #+#    #+#             */
/*   Updated: 2021/10/08 10:29:48 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	len;

	len = 0;
	while (s[len])
		len++;
	if (len)
		write(fd, s, len);
}
