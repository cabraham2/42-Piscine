/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:23:56 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/15 16:51:25 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	resultat;

	int i;

	i = 0;

	resultat = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	while(i < power - 1)
	{
		resultat *= nb;
		i++;
	}
	return (resultat);
}

// int	main()
// {
// 	printf("%i\n", ft_iterative_power(0, 2));
// 	printf("%i\n", ft_iterative_power(-5, 2));
// 	printf("%i\n", ft_iterative_power(5, 2));
// 	printf("%i\n", ft_iterative_power(5, -2));
// 	printf("%i\n", ft_iterative_power(0, 0));
// 	printf("%i\n", ft_iterative_power(3, 4));
// 	printf("%i\n", ft_iterative_power(5, 0));
// 	printf("%i\n", ft_iterative_power(-2, -2));
// }