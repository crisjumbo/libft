/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:28:14 by ajumbo            #+#    #+#             */
/*   Updated: 2021/09/28 10:10:22 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, void *src, unsigned int n)
{
	unsigned char	*new_src;
	unsigned char	*new_dst;

	new_src = (unsigned char *)src;
	new_dst = (unsigned char *)dst;
	while (n)
	{
		*(new_dst++) = *(new_src++);
		n--;
	}
	return (dst);
}
