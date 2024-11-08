/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:30:36 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/22 15:55:29 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	leng;

	if (min >= max)
		return (NULL);
	leng = max - min;
	arr = (int *)malloc(leng * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < leng)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	i;
	int	min = 5;
	int	max = 10;

	arr = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d", arr[i]);
		i++;
	}
	free (arr);
	return (0);
}
*/
