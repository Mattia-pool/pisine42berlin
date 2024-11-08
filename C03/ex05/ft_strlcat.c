/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:30:00 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/15 19:40:32 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest_len = i;
	j = 0;
	while (src[j] != '\0')
		j++;
	src_len = j;
	if (size <= dest_len)
		return (size + src_len);
	j = 0;
	while (src[j] != '\0' && (dest_len + j) < (size - 1))
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	char	*src;
	char	*dest;
	int		x;

	if (argc != 3)
	{
		return (1);
	}
	src = argv[2];
	dest = argv[1];
	printf("%d", ft_strlcat(dest, src, 5));
	return (0);
}
*/
