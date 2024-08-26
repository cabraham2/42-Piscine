/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 00:09:42 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/26 14:49:43 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	i;
	unsigned int	j;

	destlen = 0;
	srclen = 0;
	while (dest[destlen])
		destlen++;
	while (src[srclen])
		srclen++;
	i = 0;
	j = destlen;
	if (size <= destlen)
		return (srclen + size);
	while (src[i] && i < size - destlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (destlen + srclen);
}

/*#include <stdio.h>

int main()
{
    char dest[20] = "Hello, ";
    char src[] = "world!";
    unsigned int size = 15;

    unsigned int result = ft_strlcat(dest, src, size);

    printf("Result: %u\n", result);
    printf("Concatenated String: %s\n", dest);

    return 0;
}*/