/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 09:30:50 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/26 14:25:17 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(a)
{
	write(1, &a, 1);
}

int	boucle(char *tab, int n)
{
	int	i;

	i = n - 1;
	while (i >= 0)
	{
		if (tab[i] < '9' - (n - 1 -i))
		{
			tab[i]++;
			while (i < n - 1)
			{
				tab[i + 1] = tab[i] + 1;
				i++;
			}
			return (1);
		}
		i--;
	}
	return (0);
}

void	ft_print_combn(int n)
{
	int		i;
	char	tab[10];

	i = 0;
	if (n > 10 || n <= 0)
	{
		return;
	}
	while (i < n)
	{
		tab[i] = '0' + i;
		i++;
	}
	while (1)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(tab[i]);
			i++;
		}
		if (tab[0] != '9' - (n - 1))
		{
			write(1, ", ", 2);
		}
		if (!boucle(tab, n))
		{
			break;
		}
	}	
}

/* int main()
{
     ft_print_combn(4);
} */