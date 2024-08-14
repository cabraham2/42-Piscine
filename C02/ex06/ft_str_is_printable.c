/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 07:21:59 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/13 16:35:30 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char *str1 = "La patience est un plat qui se mange sans sauce.";
// 	char *str2 = "On est\tpas tellement des gens de terrain.
// Pas des cerveaux non plus, me faites pas dire ce que j’ai pas dit.";
// 	char *str3 = "";
// 	char *str4 = "abcdefg\x1Fhijklmnop";

// 	printf("ft_str_is_printable(\"%s\") = %d\n",
// str1, ft_str_is_printable(str1));
// 	printf("ft_str_is_printable(\"%s\") = %d\n",
// str2, ft_str_is_printable(str2));
// 	printf("ft_str_is_printable(\"%s\") = %d\n",
// str3, ft_str_is_printable(str3));
// 	printf("ft_str_is_printable(\"%s\") = %d\n",
// str4, ft_str_is_printable(str4));

// 	return 0;
// }
