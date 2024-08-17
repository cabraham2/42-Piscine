/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:53:14 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/16 11:08:10 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
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
	return (nb * ft_recursive_power(nb, power - 1));
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