/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:00:52 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/22 15:56:05 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strleng(char *str)
{
	int	leng;

	leng = 0;
	while (str[leng] != '\0')
		leng++;
	return (leng);
}

char	*ft_strdup(char *src)
{
	int		leng;
	int		i;
	char	*copy;

	leng = ft_strleng(src);
	copy = (char *)malloc(leng * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>

int	main (void)
{
	char	*src;

	src = "Matertyuiolkjhgvhihwhfuhwofhweofhowefieofhewofhcvtia";
	printf("%s", ft_strdup(src));
	free (src);
	return (0);
}
*/
