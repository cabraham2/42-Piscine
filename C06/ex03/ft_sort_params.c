/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:33:17 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/19 13:47:31 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char const **argv)
{
	int	i;
	int x;

	x = 0;
	i = 1;
	while (argc > i )
	{
		while (argv[i][x] != '\0')
		{
			write(1, &argv[ft_sort_int_tab(argc)][x],1);
			x++;
		}
		i++;
		x = 0;
		write(1, "\n",1);
	}
}