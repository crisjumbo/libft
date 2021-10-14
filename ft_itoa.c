/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:41:23 by ajumbo            #+#    #+#             */
/*   Updated: 2021/10/08 08:40:42 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static long int	ft_ilen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*ft_toarray(char *num, unsigned int number, unsigned int len)
{
	while (number > 0)
	{
		num[len--] = number % 10 + 48;
		number /= 10;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char			*num;
	long int		len;
	unsigned int	number;

	len = ft_ilen(n);
	num = (char *) malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	num[len--] = '\0';
	if (n == 0)
		num[0] = '0';
	if (n < 0)
	{
		number = n * -1;
		num[0] = '-';
	}
	else
		number = n;
	return (ft_toarray(num, number, len));
}
