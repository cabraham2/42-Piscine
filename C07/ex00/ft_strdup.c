/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:25:57 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/20 18:47:07 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	char *variablenez;
	int i;
	int x;
	i = 0;
	while (src[i])
	{
		i++;
	}
	variablenez = malloc((i + 1) * sizeof(char));
	if (!(variablenez))
		return (0);
	while (src[x])
	{
		variablenez[x] = src[x];
		x++;
	}
	variablenez[x] = '\0';
	return (variablenez);
	
}