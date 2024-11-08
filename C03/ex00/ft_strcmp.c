/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 23:45:16 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/16 13:18:33 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	char		*str = "abc";
	char		*btr = "ab";
	unsigned int	result;

//	str = argv[1];
//	btr = argv[2];
	result = ft_strcmp(str, btr);
	printf("%d", result);
	//write(1, &result, 1);
//	if (result > 0 || result < 0)
//	{
//		write(1, "works", 5);
//	}
	return (0);
}
*/
