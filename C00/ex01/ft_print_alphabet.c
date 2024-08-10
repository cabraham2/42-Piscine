/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:10:43 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/08 14:28:37 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	lettre;

	lettre = 'a';
	while (lettre <= 'z')
	{
		write(1, &lettre, 1);
		lettre ++;
	}
}
