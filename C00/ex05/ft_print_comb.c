/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:12:08 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/08 15:42:54 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_value(char a, char b, char c)
{
	char	tab[3];

	tab[0] = '0' + a;
	tab[1] = '0' + b;
	tab[2] = '0' + c;
	write(1, tab, 3);
	if (a != 7 || b != 8 || c != 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	b = a + 1;
	c = b + 1;
	while (a < 9)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_value(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
