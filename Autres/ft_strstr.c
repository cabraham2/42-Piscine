/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 01:11:01 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/13 15:42:18 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	i = 0;
	k = 0;
	while (to_find[k])
		k++;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
			j++;
		else
			j = 0;
		if (j == k)
		{
			if (str[i - k] == ' ')
				k--;
			return (&str[i - k]);
		}
		i++;
	}
	return (0);
}
