/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 00:09:42 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/19 17:59:33 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	taille_dest;
	unsigned int	taille_src;
	unsigned int	concat;

	taille_dest = 0;
	taille_src = 0;
	concat = 0;
	while (dest[taille_dest])
		taille_dest++;
	while (src[taille_src])
		taille_src++;
	if (taille_dest >= size)
		return (size + taille_src);
	while (concat < (size - taille_dest - 1) && src[concat])
	{
		dest[taille_dest + concat] = src[concat];
		concat++;
	}
	dest[taille_dest + concat] = '\0';
	return (taille_dest + taille_src);
}
