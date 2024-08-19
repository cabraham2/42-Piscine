/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 02:50:09 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/19 03:43:16 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	base(char *hexa)
{
	int nb;

	nb = 0;
	while (hexa[nb] != '\0')
	{
		nb++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (nbr == 2147483647)
	{
		write(1, "2147483647", 11);
	}
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 12);
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		nbr += '0';
		write(1, &nbr, 1);
	}
}