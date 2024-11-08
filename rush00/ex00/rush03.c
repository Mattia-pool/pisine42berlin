/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:12:19 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/06 18:05:19 by rverma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_printfl(int x)
{
	int	c;

	c = 0;
	while (c < x)
	{
		if (c == 0)
		{
			ft_putchar('A');
		}
		else if (c == x - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		c++;
	}
	ft_putchar('\n');
}

void	ft_printll(int x)
{
	int	c;

	c = 0;
	while (c < x)
	{
		if (c == 0)
		{
			ft_putchar('A');
		}
		else if (c == x - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		c++;
	}
	ft_putchar('\n');
}

void	ft_printml(int x)
{
	int	c;

	c = 0;
	while (c < x)
	{
		if (c == x -1 || c == 0)
		{
			ft_putchar('B');
		}
		else 
		{
			ft_putchar(' ');
		}
		c++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	r;

	if (x <= 0 || y <= 0)
	{
		write(1, "USE AN INTIGER NUMBER", 21);
		return ;
	}
	r = 0;
	while (r < y)
	{
		if (r == 0)
		{
			ft_printfl(x);
		}
		else if (r == y - 1)
		{
			ft_printll(x);
		}
		else
		{
			ft_printml(x);
		}
		r++;
	}
}
