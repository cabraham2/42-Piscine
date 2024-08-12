/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelacou <hdelacou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:01:58 by hdelacou          #+#    #+#             */
/*   Updated: 2024/08/11 21:07:24 by hdelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	writing_element(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
	{
		ft_putchar('A');
	}
	else if (i == 0 && j == x - 1)
	{
		ft_putchar('A');
	}
	else if (i == y - 1 && j == 0)
	{
		ft_putchar('C');
	}
	else if (i == y - 1 && j == x - 1)
	{
		ft_putchar('C');
	}
	else if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	else if (x == 1 && y == 1)
	{
		ft_putchar('A');
		return ;
	}
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			writing_element(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
