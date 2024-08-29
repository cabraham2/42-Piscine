/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabertin <jabertin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:26:52 by jabertin          #+#    #+#             */
/*   Updated: 2024/08/25 23:29:33 by jabertin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count++] = '\0';
	return (dest);
}

int	main(int argc, char **argv)
{
	char	*nbr_string_entree;
	char	nbr[100];
	int		i;
	char	*dictionnary;

	i = 0;
	dictionnary = "numbers.dict";
	while (i < 100)
		nbr[i++] = '\0';
	if (argc == 3)
	{
		dictionnary = argv[1];
		nbr_string_entree = argv[2];
	}
	else if (argc == 2)
		nbr_string_entree = argv[1];
	if (argc == 1 || argc > 3 || ft_atoi(nbr_string_entree) < 0)
	{
		ft_putstr("Error\n");
		return (1);
	}
	ft_start(ft_strcpy(nbr, nbr_string_entree), dictionnary);
	free (put_char_in_malloc(dictionnary));
	return (0);
}
