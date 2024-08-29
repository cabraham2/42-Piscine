/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:10:03 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/29 23:40:31 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	positive;
	int	negative;

	positive = 1;
	negative = 1;
	i = 0;
	if (length <= 1)
		return (1);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			positive = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			negative = 0;
		i++;
	}
	return (positive || negative);
}
