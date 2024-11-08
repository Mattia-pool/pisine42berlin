/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:59:21 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/14 16:28:39 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (((i < n) && (s1[i] != '\0')) || ((i < n) && (s2[i] != '\0')))
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
	char			*s1;
	char			*s2;
	unsigned int	n;
	int				result;	

	s1 = argv[1];
	s2 = argv[2];
	n = 5;
	result = ft_strncmp(s1, s2, n);
	printf("%d", result);
	return (0);
}
*/
