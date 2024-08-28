# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/27 15:24:10 by cabraham          #+#    #+#              #
#    Updated: 2024/08/27 21:56:36 by cabraham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar rcs libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o