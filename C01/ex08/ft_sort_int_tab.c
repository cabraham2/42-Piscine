/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:29:54 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/08 17:23:47 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		tmp;
	int		k;

	i = 0;
	while (i < size -1)
	{
		k = i + 1;
		while (k < size)
		{
			if (tab[i] > tab[k])
			{
				tmp = tab[i];
				tab[i] = tab[k];
				tab[k] = tmp;
			}
			k++;
		}
		i++;
	}
}
