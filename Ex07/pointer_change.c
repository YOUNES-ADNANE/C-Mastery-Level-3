/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_change.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 11:49:42 by marvin            #+#    #+#             */
/*   Updated: 2026/04/10 11:49:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this exercise (ex07), I'm discovering one of the most powerful features of Pointers. 
   I'll create a function that changes a variable's value "remotely." 
   Instead of giving the function the value, I'll give it the address (Pass by Reference), 
   allowing it to modify the original data directly in memory.
*/

#include <stdio.h>

// This function takes a pointer (an address) as a parameter
void ft_ultimate_change(int *ptr)
{
    // The asterisk (*) here means: "Go to the house at this address and put 42 inside"
    // The function doesn't even know the variable 'a', it only knows its location.
    *ptr = 42;
}

int main()
{
    int a = 10;

    printf("Value of 'a' before: %d\n", a); // It prints 10

    // Here, I'm calling the function and giving it the "Location" (&a) of my variable
    ft_ultimate_change(&a);

    // Surprise! Even though I didn't touch 'a' directly in main, its value changed.
    printf("Value of 'a' after: %d\n", a);  // It now prints 42!

    return (0);
}