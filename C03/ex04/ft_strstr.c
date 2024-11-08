/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:44:05 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/15 17:29:13 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	else if (*str == '\0' && *to_find != '\0')
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(int argc, char *argv[])
{
	char	*str;
	char	*to_find;
	char	*result
	if (argc != 3)
	{
		return (1);
	}
	str = argv[1];
	to_find = argv[2];
	ft_strstr(str, to_find);
	if (result)
		write(1, "Found: ")
	write(1, , 15);
	return (0);
}
*/
