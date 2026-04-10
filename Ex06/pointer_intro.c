/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_intro.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 11:14:19 by marvin            #+#    #+#             */
/*   Updated: 2026/04/10 11:14:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this exercise (ex06), I'm finally entering the world of Pointers. 
   I'm learning that every variable has two things: a Value (what’s inside) 
   and an Address (where it lives in the RAM). I'll use a Pointer to store 
   that address and access the value indirectly.
*/

#include <stdio.h> // I'm using printf here for easy formatting
#include <unistd.h>

int main()
{
    int a = 1337;  // This is a normal variable holding a number
    int *ptr;      // This is my Pointer. The asterisk (*) tells the computer: 
                   // "This variable will only store memory addresses."

    ptr = &a;  // The '&' symbol gets the "Location" of 'a' and stores it in 'ptr'

    printf("Value of a: %d\n", a);  
    printf("Address of a: %p\n", &a);  // Printing the actual memory address
    printf("Pointer ptr holds: %p\n", ptr); // It should hold the exact same address as &a
    
    // Using *ptr here means: "Go to the address you're holding and get the value there"
    printf("Value via ptr: %d\n", *ptr);  

    return (0);
}