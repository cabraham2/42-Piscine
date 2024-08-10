/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 05:09:45 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/10 05:17:31 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

void rush(int x, int y)
{
	int i, j;

	if (x <= 0 || y <+ 0)
	{
		return;
	}
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1))
			{
				ft_putchar('o');
			}
			else if ((i == y - 1 && j == 0) || (i == 0 && j == x - 1))
			{
				ft_putchar('o');
			}
			else if (i == 0 || i == y - 1)
			{
				ft_putchar('-');
			}
			else if (j == 0 || j == x - 1)
			{
				ft_putchar('|');
			}
			
			else{
				ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int main(void){
	rush(120, 57);
	return(0);
}
