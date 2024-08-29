/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabertin <jabertin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:52:20 by tle-goff          #+#    #+#             */
/*   Updated: 2024/08/25 23:23:24 by jabertin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_malloc_file(char *dictionnary)
{
	int		fd;
	char	c;
	char	*size_file;
	int		cmpt;

	cmpt = 0;
	fd = open(dictionnary, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Erreur\n", 7);
		return (NULL);
	}
	while ((read(fd, &c, 1)) > 0)
		cmpt++;
	close(fd);
	size_file = malloc(sizeof(char) * (cmpt + 1));
	return (size_file);
}

char	*put_char_in_malloc(char *dictionnary)
{
	int		fd;
	char	c;
	int		i;
	char	*tab_char;

	i = 0;
	tab_char = ft_malloc_file(dictionnary);
	fd = open(dictionnary, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Erreur\n", 7);
		return (NULL);
	}
	while (read(fd, &c, 1) > 0)
	{
		tab_char[i] = c;
		i++;
	}
	close(fd);
	return (tab_char);
}
