/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 23:50:27 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/11 23:51:52 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;
	int diff;

	i = 0;
	diff = 'a' - 'A';
	while (str[i])
	{
		while (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + diff;
			i++;
		}
		i++;
	}
	return (str);
}
