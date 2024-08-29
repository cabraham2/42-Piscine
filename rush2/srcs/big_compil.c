/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_compil.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-goff <tle-goff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:59:18 by tle-goff          #+#    #+#             */
/*   Updated: 2024/08/25 23:14:22 by tle-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int	ft_size(char *nb)
{
	int	i;

	i = 0;
	while (nb[i] != '\0')
		i++;
	return (i);
}

char	*ft_milles(char *nb)
{
	int		count;
	int		i;
	char	*result;

	count = 0;
	i = 0;
	if (ft_size(nb) % 3 == 0)
		count = (ft_size(nb) / 3) - 1;
	else
		count = ft_size(nb) / 3;
	result = malloc(sizeof(char) * 64);
	result[i++] = '1';
	while (i <= count * 3)
		result[i++] = '0';
	result[i] = '\0';
	return (result);
}

t_NumberParts	bignb(int nb)
{
	t_NumberParts	parts;

	parts.cent = 0;
	parts.digit = 0;
	parts.dizaine = 0;
	if (nb <= 1000)
	{
		if (nb >= 100)
		{
			parts.cent = nb / 100;
			nb = nb % 100;
		}
		if (nb >= 10)
		{
			parts.dizaine = nb / 10;
			nb = nb % 10;
		}
		parts.digit = nb;
	}
	return (parts);
}

char	*ft_chain(int nb)
{
	char	*chain;

	chain = malloc(sizeof(char) * 3);
	if (nb < 10)
	{
		chain[0] = nb + '0';
		chain[1] = '\0';
	}
	else
	{
		chain[0] = (nb / 10) + '0';
		chain[1] = (nb % 10) + '0';
		chain[2] = '\0';
	}
	return (chain);
}

void	ft_decompose2(t_NumberParts parts, char *str, char *hello)
{
	if (parts.dizaine >= 2)
	{
		hello = ft_chain(parts.dizaine * 10);
		ft_write(str, hello);
		free(hello);
	}
	else if (parts.dizaine == 1)
	{
		hello = ft_chain(parts.dizaine * 10 + parts.digit);
		ft_write(str, hello);
		parts.digit = 0;
		free(hello);
	}
	if (parts.digit > 0)
	{
		hello = ft_chain(parts.digit);
		ft_write(str, hello);
		free(hello);
	}
}
