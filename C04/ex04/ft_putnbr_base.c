/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:28:45 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/17 17:16:35 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	invalid_base(char *str, int size)
{
	int	a;
	int	i;

	a = size;
	if (argc != 3)
	{
		write(2, "error\n", 6);
	}
	if (*str == '\0' || (*str + 1) == '\0')
	{
		write(2, "error\n", 6);
	}
	while (*str != '\0')
	{
		while (size > 0)
		{
			i = 0;
			size = a;
			if (str[i] == str[size])
				write(2, "error\n", 6);
				return (1);
			if (str[i] == '-' || str[i] == '+')
				write(2, "error\n", 6);
				return (1);
			else
				size--;
			a--;
			
		}
	}
}

void	turn_int(char *str)
{
	int	nb;

	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{

}

int	main(int argc, char *argv[])
{
	char	*base;
	int		nbr;
	int		size;

	while (*argv[1] != '\0')
		size++;
	invalid_base(argv[1], size);
	nbr = turn_int(argv[1]);
	
}
*/
