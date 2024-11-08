/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:02:42 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/10 22:09:07 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fwl(char c)
{
	if ((c >= 9 && c <= 13) || (c >= 32 && c <= 47))
	{
		return (1);
	}
	else if ((c >= 58 && c <= 64) || (c >= 91 && c <= 96))
	{
		return (1);
	}
	else if (c >= 123 && c <= 126)
	{
		return (1);
	}
	return (0);
}

int	ft_cap(int c, int cap)
{
	if (cap == 1)
	{
		if ((c >= 97) && (c <= 122))
		{
			return (c - 32);
		}
	}
	else 
	{
		if ((c >= 65) && (c <= 90))
		{
			return (c + 32);
		}
	}
	return (c);
}

void	ft_fillstr(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	while (str[i] != '\0')
	{
		if (ft_fwl(str[i]) == 1)
		{
			cap = 1;
		}
		else
		{
			str[i] = ft_cap(str[i], cap);
			cap = 0;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	ft_fillstr(str);
	return (str);
}
/*
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	str[256];
	
	ft_strcpy(str, "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");
	ft_strcapitalize(str);
	write(1, str, 100);
	return (0);
}
*/ 
