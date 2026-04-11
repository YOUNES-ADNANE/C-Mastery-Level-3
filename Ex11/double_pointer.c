/*                                                                            */
/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   double_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 12:29:54 by marvin            #+#    #+#             */
/*   Updated: 2026/04/11 12:29:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* 
   In this exercise, I'm going one level deeper into memory. 
   I'm using a 'Pointer to a Pointer' to change the original value of 'a'.
*/
void ft_ultimate_ultimate_change(int **ptr_to_ptr)
{
    // The double asterisk (**) means: "Go down two levels of addresses 
    // to reach and modify the original integer value."
    **ptr_to_ptr = 1337;
}

int main()
{
    int a = 42;
    int *ptr = &a;           // This is a normal pointer holding the address of 'a'
    int **ptr_to_ptr = &ptr; // This is a pointer that holds the address of 'ptr'

    printf("Value before: %d\n", a);

    // I'm passing the address of the pointer to the function
    ft_ultimate_ultimate_change(ptr_to_ptr);

    // After digging through two levels of memory, the value of 'a' is updated
    printf("Value after : %d\n", a); // It will be 1337

    return (0);
}