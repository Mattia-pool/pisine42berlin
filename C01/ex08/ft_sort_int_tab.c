/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:57:17 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/10 13:22:28 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	temp;

	i = 0;
	temp = 0;
	while (i < size)
	{
		x = i + 1;
		while (x < size)
		{
			if (tab[i] > tab[x])
			{
				temp = tab[i];
				tab[i] = tab[x];
				tab[x] = temp;
			}
			x++;
		}
		i++;
	}
}
