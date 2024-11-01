/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:09:12 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/29 23:40:41 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	while (tab[i] < length)
	{
		if (f(tab[i]) != 0)
			x++;
		i++;
	}
	return (x);
}
