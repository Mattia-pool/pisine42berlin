/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:08:12 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/10 12:56:11 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
int	ft_size(int *tab)
{
	int	size;

	size = 0;
	while (tab[size] != '\0')
	{
		size++;
	}
	if (size > 0)
	{
		return (size);
	}
	else 
	{
		return (0); 
	}
}
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	x;

	x = size - 1;
	i = 0;
	while (i < x)
	{
		temp = tab[i];
		tab[i] = tab[x];
		tab[x] = temp;
		i++;
		x--;
	}
}
/*
void	ft_putstr(char *str)
{
	int	index;

	index = 0;	
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}
*/

/*
int	main(void)
{
	int	size;
	int	tab[] = {4, 3, 2, 1, 0};
	
	size = 5;
	ft_rev_int_tab(tab, size);
	ft_putstr(tab);
	return (0);	
}
*/
