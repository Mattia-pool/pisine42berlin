/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:05:13 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/21 13:26:08 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_check(int nb, int check)
{
	if (nb < 0)
		return (0);
	if (check * check == nb)
		return (check);
	if (check * check > nb)
		return (0);
	return (ft_sqrt_check(nb, check + 1));
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_check(nb, 0));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(36));
	return (0);
}
*/
