/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 04:25:28 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/12 06:01:22 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;
	int	diff;

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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 1)
			{
				str[i] = str[i] - 32;
			}
			j = 0;		}
		else if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
		{
			j = 1;
		}
		else
			j = 0;
		i++;
	}
	return (str);
}
