/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:33:00 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/26 16:46:49 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;
	int	*tableau;

	i = 0;
	diff = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tableau = malloc(diff * sizeof(int));
	if (!(tableau))
		return (-1);
	while (min < max)
	{
		tableau[i] = min;
		min++;
		i++;
	}
	*range = tableau;
	return (diff);
}
