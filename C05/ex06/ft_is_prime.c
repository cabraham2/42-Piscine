/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 05:51:33 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/19 06:25:06 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb < 2)
	{
		return (0);
	}
	while (i < nb)
	{
		if (nb < 0)
		{
			return (0);
		}
		if (i != 1 && i != nb && nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/* #include <stdio.h>
int	main(void)
{
	printf("%i", ft_is_prime(3));
} */
