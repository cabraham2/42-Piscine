/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljacq <ljacq@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:05:53 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/18 13:07:31 by ljacq            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>

int	check(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
		return (1);
	if (ft_strlen(av[1]) != 31)
		return (1);
	while (av[1][i] != '\0')
	{
		if (i % 2 == 0 && (av[1][i] < 49 || av[1][i] > 52))
			return (1);
		else if (i % 2 == 1 && av[1][i] != 32)
			return (1);
		i ++;
	}
	return (0);
}

int	*get_numbers(char *str)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(64);
	if (tab == NULL)
		return (0);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] >= '1' && str[i] <= '4')
			tab[j++] = ft_atoi(str + i);
	return (tab);
}
