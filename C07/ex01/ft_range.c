/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:31:22 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/26 15:19:48 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	diff;
	int	*tableau;

	i = 0;
	diff = max - min;
	if (min >= max)
	{
		return (NULL);
	}
	tableau = malloc(diff * sizeof(int));
	if (!(tableau))
		return (NULL);
	while (min < max)
	{
		tableau[i] = min;
		min++;
		i++;
	}
	return (tableau);
}
/* int main(void)
{
	int i;
	
	i = 300;
	while (i != 309)
	{
		printf("%i", *ft_range(300, 310));
		i++;
	}
	
	
} */