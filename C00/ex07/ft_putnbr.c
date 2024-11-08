/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:06:37 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/09 14:31:21 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_intcount(int nb)
{
	int	count;

	count = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

void	writespecials(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb == 2147483647)
	{
		write(1, "2147483647", 10);
	}
	else if (nb == 1)
	{
		write(1, "1", 1);
	}
	else if (nb == -1)
	{
		write(1, "-1", 2);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
}

void	handle_negative(int *nb)
{
	if (*nb < 0)
	{
		write(1, "-", 1);
		*nb = -(*nb);
	}
}

void	ft_putnbr(int nb)
{
	int	count;
	int	y;
	int	buffer[11];

	if (nb == -2147483648 || nb == 2147483647 || nb == 1 || nb == -1 || nb == 0)
	{
		writespecials(nb);
		return ;
	}
	y = 0;
	handle_negative(&nb);
	ft_intcount(nb);
	count = ft_intcount(nb);
	while (count-- > 0)
	{
		buffer[y++] = nb % 10 + 48;
		nb = nb / 10;
	}
	while (y > 0)
	{
		write(1, &buffer[--y], 1);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
	ft_putnbr(0);
	ft_putnbr(1);
	ft_putnbr(-1);
	ft_putnbr(-100);
	ft_putnbr(47);
	ft_putnbr(-2147483647);
	ft_putnbr(2147483646);
	return (0);
}
*/
