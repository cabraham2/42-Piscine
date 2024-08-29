/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabertin <jabertin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:24:01 by jabertin          #+#    #+#             */
/*   Updated: 2024/08/25 23:32:10 by jabertin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_NumberParts
{
	int	cent;
	int	dizaine;
	int	digit;
}	t_NumberParts;

void			ft_decompose2(t_NumberParts parts, char *str, char *hello);
char			*put_char_in_malloc(char *dictionnary);
char			*ft_malloc_file(char *dictionnary);
char			*ft_strstr(char *str, char *to_find);
void			ft_write(char *tab_char, char *nbr);
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_atoi(char *str);
int				parse(char test);
int				ft_size(char *nb);
char			*ft_milles(char *nb);
t_NumberParts	bignb(int nb);
char			*ft_chain(int nb);
void			ft_decompose(int nb, char *dictionnary);
char			*ft_centaine(char *nb);
void			ft_reverse(char *nb);
void			ft_while(char *nbr, int i, int count, char *dictionnary);
void			ft_start(char *nbr, char *dictionnary);
char			*ft_strcpy(char *dest, char *src);

#endif
