/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagrin <mmagrin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:30:16 by mmagrin           #+#    #+#             */
/*   Updated: 2024/10/21 14:59:09 by mmagrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*str;

	str = argv[0];
	if (argc > 1)
	{
		write(2, "error\n", 6);
	}
	while (*str != '\0')
	{
		write(1, str++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
