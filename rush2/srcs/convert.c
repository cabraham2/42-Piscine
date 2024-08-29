/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabertin <jabertin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:34:17 by tle-goff          #+#    #+#             */
/*   Updated: 2024/08/25 23:29:55 by jabertin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

char	*ft_centaine(char *nb)
{
	int		count;
	char	*result;

	if (ft_size(nb) % 3 == 0)
		count = 3;
	else
		count = ft_size(nb) % 3;
	result = malloc(sizeof(char) * (count + 1));
	if (count == 3)
	{
		result[0] = nb[0];
		result[1] = nb[1];
		result[2] = nb[2];
	}
	else if (count == 2)
	{
		result[0] = nb[0];
		result[1] = nb[1];
	}
	else
		result[0] = nb[0];
	result[count] = '\0';
	return (result);
}

void	ft_while(char *nbr, int i, int count, char *dictionnary)
{
	char	*result;
	int		nb;
	char	*fre;
	char	*str;

	while (i < count)
	{
		str = ft_centaine(nbr);
		nb = ft_atoi(str);
		ft_decompose(nb, dictionnary);
		result = ft_milles(nbr);
		if (ft_size(result) != 1)
		{
			if (nbr[0] != '0' || nbr[1] != '0' || nbr[2] != '0')
			{
				fre = put_char_in_malloc(dictionnary);
				ft_write(fre, result);
				free(fre);
			}
		}
		free(result);
		free(str);
		ft_reverse(nbr);
		i++;
	}
}

void	ft_reverse(char *nb)
{
	int	i;

	i = 0;
	if (ft_size(nb) % 3 == 2)
	{
		while (nb[i + 2] != '\0' && i < ft_size(nb) - 2)
		{
			nb[i] = nb[i + 2];
			i++;
		}
	}
	else if (ft_size(nb) % 3 == 1)
	{
		while (nb[i + 1] != '\0' && i < ft_size(nb) - 1)
		{
			nb[i] = nb[i + 1];
			i++;
		}
	}
	while (nb[i + 3] != '\0')
	{
		nb[i] = nb[i + 3];
		i++;
	}
	nb[i] = '\0';
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i1;
	int	i2;
	int	size;

	i1 = 0;
	size = ft_size(to_find);
	if (size == 0)
		return (str);
	while (str[i1] != '\0')
	{
		i2 = 0;
		while (i2 < size && str[i1 + i2] == to_find[i2])
		{
			i2++;
		}
		if (i2 == size)
		{
			return (&str[i1]);
		}
		i1++;
	}
	return (NULL);
}

void	ft_write(char *tab_char, char *nbr)
{
	int	i;

	i = 0;
	while (ft_strstr(tab_char, nbr)[i] != '\n')
	{
		if (ft_strstr(tab_char, nbr)[i] >= 'a'
			&& ft_strstr(tab_char, nbr)[i] <= 'z')
			write(1, &ft_strstr(tab_char, nbr)[i], 1);
		i++;
	}
	write(1, " ", 1);
}
