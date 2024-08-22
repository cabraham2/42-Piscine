/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:25:57 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/21 15:30:57 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char *variablenew;
	int i;
	int x;

	i = 0;
	x = 0;
	while (src[i])
	{
		i++;
	}
	variablenew = malloc((i + 1) * sizeof(char));
	if (!(variablenew))
		return (NULL);
	while (src[x])
	{
		variablenew[x] = src[x];
		x++;
	}
	variablenew[x] = '\0';
	return (variablenew);
	
}

/* int	main(void)
{
	char	*texte = "hello";
	char	*duplicate = ft_strdup(texte);

	if (duplicate)
	{
		printf("%s", duplicate);
	}
	return (0);
}  */