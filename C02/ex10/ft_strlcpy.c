/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:20:11 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/12 20:01:45 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*
int	main(int argc, char *argv[])
{
	char		dest[256];
	char		*src;
	unsigned int	size;
	unsigned int	result;

	if (argc < 2)
	{
		write(1, "Usage: ./program_name <string>\n", 32);
		return (1);
	}
	src = argv[1];
	size = 7;
	result = ft_strlcpy(dest, src, size);
	write(1, &result, 1);
	return (0);
}
*/
