/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabertin <jabertin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 23:08:27 by jabertin          #+#    #+#             */
/*   Updated: 2024/08/25 23:28:13 by jabertin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	ft_start(char *nbr, char *dictionnary)
{
	int		i;
	int		count;

	i = 0;
	if (ft_size(nbr) % 3 == 0)
		count = (ft_size(nbr) / 3);
	else
		count = ft_size(nbr) / 3 + 1;
	ft_while(nbr, i, count, dictionnary);
}

void	ft_decompose(int nb, char *dictionnary)
{
	t_NumberParts	parts;
	char			*hello;
	char			*str;

	parts = bignb(nb);
	str = put_char_in_malloc(dictionnary);
	if (parts.cent > 0 && parts.cent)
	{
		hello = ft_chain(parts.cent);
		ft_write(str, hello);
		ft_write(str, "100");
		free(hello);
	}
	ft_decompose2(parts, str, hello);
	if (parts.cent == 0 && parts.dizaine == 0 && parts.digit == 0)
	{
		hello = ft_chain(parts.digit);
		ft_write(str, hello);
		free(hello);
	}
	free(str);
}
