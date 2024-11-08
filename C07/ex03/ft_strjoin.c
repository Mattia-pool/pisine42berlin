/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:18:23 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/24 12:28:30 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *strs)
{
	int	i;

	i = 0;
	while (strs[i] != '\0')
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	len;
	int	j;

	len = 0;
	j = 0;
	while (j < size)
	{
		len = len + ft_strlen(strs[j]);
		j++;
	}
	len = len + (size - 1) * ft_strlen(sep);
	return (len);
}

void	ft_strcat(char *joined_str, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	w;

	w = 0;
	j = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
			joined_str[w++] = strs[j][i++];
		if (j < size - 1)
		{
			i = 0;
			while (sep[i] != '\0')
				joined_str[w++] = sep[i++];
		}
		j++;
	}
	joined_str[w] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined_str;
	int		len;

	if (size == 0)
	{
		joined_str = (char *)malloc(1);
		if (joined_str != NULL)
			joined_str[0] = '\0';
		return (joined_str);
	}
	len = ft_total_len(size, strs, sep);
	joined_str = (char *)malloc(len * sizeof(char));
	if (!joined_str)
		return (NULL);
	ft_strcat(joined_str, strs, sep, size);
	return (joined_str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**strs;
	char	*sep;
	char	*joined_str;

	strs = (char **)malloc(5 * sizeof(char *));
	if (!strs)
		return (1);
	strs[0] = "Mattia";
	strs[1] = "quarantadue";
	strs[2] = "berlino";
	strs[3] = "2024";
	strs[4] = "YouTube";
	sep = ", ";
	joined_str = ft_strjoin(5, strs, sep);
	if (joined_str)
	{
		printf("%s\n", joined_str);
		free(joined_str);
	}
	free (strs);
	return (0);
}
*/
