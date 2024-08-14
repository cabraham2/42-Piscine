/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 22:50:21 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/14 14:42:02 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 1)
				str[i] -= 32;
			j = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str1[] = "j’irai me coucher quand vous m’aurez juré qu’il n’y
//  a pas dans cette foret d’animal plus dangereux que le lapin adulte !";
// 	char	str2[] = "salut, comment tu vas ? 42mots
// quarante-deux; cinquante+et+un";

// 	printf("Avant : %s\n", str1);
// 	printf("Après : %s\n", ft_strcapitalize(str1));
// 	printf("\nAvant : %s\n", str2);
// 	printf("Après : %s\n", ft_strcapitalize(str2));
// 	return (0);
// }
