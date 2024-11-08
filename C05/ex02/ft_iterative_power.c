/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:21:57 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/21 11:36:22 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nnb;

	nnb = nb;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nnb = nnb * nb;
		power--;
	}
	return (nnb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(3, 3));
	return (0);
}
*/
