/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:40:25 by cabraham          #+#    #+#             */
/*   Updated: 2024/08/08 11:11:34 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    print_value(char a, char b){

    char tab[2];
    tab[0] = '0' + a;
    tab[1] = '0' + b;

    write(1,tab,2);
    if(a != 9 || b != 9){
        write(1, ", " , 2);
    }
    else{
        a = 0;
        b = 0;
    }
}

void    ft_print_comb2(void){
    int a;
    int b;
    int x;
    a = 0;
    b = 0;
    x = 0;
}

void    boucle(a, b, x){
    /*ft_print_comb2(a, b ,x);*/
    while (a <= 9){
        while (b < 9){
            print_value(a, b);                    
            if (x == 2){
                return;
            }
            else if (a == 9 && b == 9){
                x++;
            }
            b++;
        }
        a++;
    }
}

