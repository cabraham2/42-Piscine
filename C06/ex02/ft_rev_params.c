/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:22:51 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/19 15:06:53 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char const **argv)
{
	int	i;
	int	x;

	x = 0;
	i = argc - 1;
	while (argc > i && i != 0)
	{
		while (argv[i][x] != '\0')
		{
			write(1, &argv[i][x], 1);
			x++;
		}
		i--;
		x = 0;
		write(1, "\n", 1);
	}
}
