/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:16:57 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/14 18:47:23 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == 2147483647)
	{
		write(1, "2147483647", 11);
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 12);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb += '0';
		write(1, &nb, 1);
	}
}
/*
Guide:
 
https://drive.google.com/file/d/1Mzn6o3n5xIhN6nueBAl3YTzyb27ZgMrD/view?pAyOlajsDo leaked by 0-day team
 
(zerodayleaks on telegram)

*/