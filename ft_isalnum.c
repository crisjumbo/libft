/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:10:10 by ajumbo            #+#    #+#             */
/*   Updated: 2021/09/28 10:14:11 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (!((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58)))
		return (0);
	return (1);
}
