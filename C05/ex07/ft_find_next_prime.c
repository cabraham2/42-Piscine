/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 06:27:42 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/19 06:52:37 by cabraham         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 0)
		return (ft_find_next_prime(nb +1));
	else
	{
		return (nb);
	}
}
/* #include <stdio.h>
int	main(void)
{
	printf("%d", ft_find_next_prime(52280));
} */