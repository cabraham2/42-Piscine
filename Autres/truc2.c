/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   truc2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:29:15 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/25 15:44:26 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

typedef	struct {
	int	cent;
	int	dizaine;
	int	digit;
} NumberParts;

NumberParts	bignb(int nb)
{
	NumberParts parts = {0, 0, 0};

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

void	ft_decompose(int nb)
{
	NumberParts	parts = bignb(nb);

	if (parts.cent > 0 && parts.cent != 1)
	{
		printf("|%d| |100| ", parts.cent);
	}
	else if (parts.cent > 0)
	{
		printf("|100|");
	}
	if (parts.dizaine >= 2)
	{
		printf("|%d|", parts.dizaine * 10);
	}
	else if (parts.dizaine == 1)
	{
		printf("|%d|", parts.dizaine * 10 + parts.digit);
		parts.digit = 0;
	}
	if (parts.digit > 0)
	{
		printf(" |%d|", parts.digit);
	}
}

int	main(void)
{
	char	input[10];
	char	*result;
	int		nb;

	printf("Entrer un nombre : ");
	scanf("%s", input);
	nb = atoi(input);
	ft_decompose(nb);
	result = ft_milles("10000000");
	printf("Resultat : %s", result);
	free(result);
	return (0);
}
