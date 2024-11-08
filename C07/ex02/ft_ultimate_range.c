/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:43:12 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/22 19:17:34 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	leng;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	leng = max - min;
	*range = (int *)malloc(leng * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < leng)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (leng);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	size;
	int	i;

	size = ft_ultimate_range(&range, 5, 10);
	printf("%d", size);
	free (range);
	return (0);
}
*/
