/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:24:32 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/19 04:27:24 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	resultat;

	resultat = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		resultat = resultat * nb;
		nb--;
	}
	return (resultat);
}
