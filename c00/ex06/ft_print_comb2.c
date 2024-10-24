/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:47:54 by codebind          #+#    #+#             */
/*   Updated: 2024/10/15 21:53:32 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
 {
    int i = 0;
    while (i <= 98)
 {
        int j = i + 1;
        while (j <= 99)
 {
            
            write(1, &(char){i / 10 + '0'}, 1); 
            write(1, &(char){i % 10 + '0'}, 1); 

            
            write(1, " ", 1);

           
            write(1, &(char){j / 10 + '0'}, 1); 
            write(1, &(char){j % 10 + '0'}, 1); 

            
            if (!(i == 98 && j == 99)) {
                write(1, ", ", 2); 
            }

            j++; 
        }
        i++; 
    }
}

int main(void) {
    ft_print_comb2();
    return 0;
}

