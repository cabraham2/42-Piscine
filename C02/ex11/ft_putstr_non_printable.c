/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:35:25 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/13 16:12:58 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_noprintable(char *str)
{
	if (*str < ' ' || *str == 127)
		return (1);
	else
		return (0);
}

void	hexa(unsigned char hey)
{
	char	*hexadecimal;

	hexadecimal = "0123456789abcdef";
	write(1, &hexadecimal[hey / 16], 1);
	write(1, &hexadecimal[hey % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (ft_str_is_noprintable(str))
		{
			write(1, "\\", 1);
			hexa(*str);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
