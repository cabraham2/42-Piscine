/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:28:45 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/12 00:06:33 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;
	int	diff;

	i = 0;
	diff = 'a' - 'A';
	while (str[i])
	{
		while (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - diff;
			i++;
		}
		i++;
	}
	return (str);
}
