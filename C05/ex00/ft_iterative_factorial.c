/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:35:27 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/20 17:23:44 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	nnb;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	nnb = 1;
	while (nb != 1)
	{
		nnb = nnb * nb;
		nb--;
	}
	return (nnb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d",ft_iterative_factorial(4));
	return (0);
}
*/
