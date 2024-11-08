/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:02:35 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/20 12:25:21 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int	main(void)
{
	ft_putnbr(1234);
	ft_putchar(10);
	ft_putnbr(-2147483648);
	ft_putchar(10);
	ft_putnbr(2147483647);
	ft_putchar(10);
	ft_putnbr(2147483646);
	ft_putchar(10);
	ft_putnbr(-2147483647);
	ft_putchar(10);
	ft_putnbr(0);
	ft_putchar(10);
	ft_putnbr(1);
	ft_putchar(10);
	ft_putnbr(-1);
	ft_putchar(10);
	ft_putnbr(-1234);
	ft_putchar(10);
	return (0);
}
