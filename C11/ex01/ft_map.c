/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:20:21 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/30 00:09:21 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tabautre;

	i = 0;
	tabautre = malloc((length) * sizeof(char));
	if (!tabautre)
		return (NULL);
	while (i < length)
	{
		tabautre[i] = f(tab[i]);
		i++;
	}
	return (tabautre);
}
