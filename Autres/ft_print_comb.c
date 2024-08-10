/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:12:08 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/07 17:15:01 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_comb(void){
    int    a, b, c;
    a=0;
    b=0;
    c=0;

    char nbr[3];

    /*char    lol;
    lol = 0;*/
    while (a != 7 && b != 8 && c != 9)
    {
        if (a++ != b && a++ != c)
        {
            a++;
        }
        else if (b++ != a && b++ != c)
        {
            b++;
        }
        else if (c++ != a && c++ != b)
        {
            c++;
        }
        nbr[0] = '0' + a;
        nbr[1] = '0' + b;
        nbr[2] = '0' + c;

       /*lol = a+b+c;*/
        write(1,&nbr,3);
        
    }
}

