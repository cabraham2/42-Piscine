/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:33:17 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/21 15:13:22 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_swap_params(char const **a, char const **b)
{
	char const	*buf;

	buf = *a;
	*a = *b;
	*b = buf;
}

int	ft_strcmp(char const *s1, char const *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_params(int argc, char const **argv)
{
	int	i;
	int	x;

	x = 0;
	i = 1;
	while (argc > i)
	{
		while (argv[i][x] != '\0')
		{
			write(1, &argv[i][x], 1);
			x++;
		}
		i++;
		x = 0;
		write(1, "\n", 1);
	}
}

int	main(int argc, char const **argv)
{
	int	i;
	int	j;
	int	x;

	x = 0;
	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap_params(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
	i = 1;
	ft_print_params(argc, argv);
}
