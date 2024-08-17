/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 11:07:00 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/16 12:24:51 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int sqrt(int i, int x)
{
	if (i < 0)
	{
		return (0);
	}
	if (x * x > i)
	{
		x++;
	}
	if (x * x == i)
	{
		/* code */
	}
	
	{
		return (ft_sqrt(i, x + 1))
	}
	return (0);
	
	
}


int	ft_sqrt(int nb)
{
	return (sqrt(nb, 0));
}