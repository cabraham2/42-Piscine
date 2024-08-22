/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:49:19 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/22 17:41:47 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
 
int	ft_strlen(char *str)
{
	int	n;
 
	n = 0;
	while (str[n])
		n++;
	return (n);
}
 
char	*ft_strcpy(char *dest, char *src)
{
	int	i;
 
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
 
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
 
	i = 0;
	j = 0;
	while (i < size)
		j += ft_strlen(strs[i++]);
	if (size > 0)
		j += (size - 1) * ft_strlen(sep);
	dest = malloc((j + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(dest + j, strs[i]);
		j += ft_strlen(strs[i]);
		if (++i < size)
			j += dest + j + ft_strlen(sep) - ft_strcpy(dest + j, sep);
	}
	dest[j] = '\0';
	return (dest);
}
int	main(void)
{
	char 	*strs[] = {"toi", "moi", "eux", "tous ceux qui le veulent"};
	int		size = 4;
	char	*sep = " + ";
 
	char	*result = ft_strjoin(size, strs, sep);
 
	if (result == NULL)
	{
		printf("maloc NUL\n");
		return 1;
	}
 
	printf("Result: %s\n", result);
 
	free(result);
 
	return 0;
}