/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 01:30:08 by marvin            #+#    #+#             */
/*   Updated: 2026/04/11 01:30:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this exercise (ex08), I'm building a 'Swap' function. 
   My goal is to exchange the values of two variables by using their addresses. 
   I'll use a temporary variable (like an empty glass) to make sure 
   I don't lose any data during the process.
*/

#include <stdio.h>

// This function takes two pointers (addresses) as parameters
void ft_swap(int *a, int *b)
{
    int temp; // An empty "glass" (temporary storage)

    temp = *a; // I go to address 'a', take the value, and hide it in 'temp'
    *a = *b;   // I go to address 'b', take its value, and put it into address 'a'
    *b = temp; // Finally, I take the value from 'temp' and put it into address 'b'
}

int main()
{
    int n = 13;
    int n1 = 37;

    printf("Before swap:\n n = %d\n n1 = %d \n", n, n1);
 
    // I'm sending the memory addresses of n and n1 using the '&' operator    
    ft_swap(&n, &n1);
    
    printf("After swap:\n n = %d\n n1 = %d \n", n, n1);
    
    return 0;
}