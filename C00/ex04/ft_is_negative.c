/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:51:59 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/03 20:42:05 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	f;
	char	t;

	if (n < 0)
	{
		f = 'N';
		write(1, &f, 1);
	}
	else if (n >= 0)
	{
		t = 'P';
		write(1, &t, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(5);
	return (0);
}
*/
