/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:21:35 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/13 16:19:05 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

// int main(void)
// {
// 	char dest[70];
// 	char src[] = "Faut arrêter ces conneries de nord et de sud !
// Une fois pour toutes, le nord,
// suivant comment on est tourné, ça change tout !";
// 	ft_strcpy(dest, src);
// 	printf("%s\n", dest);
// 	return (0);
// }
