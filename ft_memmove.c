/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:10:54 by ajumbo            #+#    #+#             */
/*   Updated: 2021/10/01 12:10:18 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, void *src, unsigned int len)
{
	unsigned char	*new_dst;
	unsigned char	*new_src;

	new_dst = dst;
	new_src = src;
	if (!(src >= dst))
	{
		while (len--)
			*(new_dst + len) = *(new_src + len);
		return (dst);
	}
	while (len)
	{
		*new_dst++ = *new_src++;
		len --;
	}
	return (dst);
}
