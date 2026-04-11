/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 02:14:40 by marvin            #+#    #+#             */
/*   Updated: 2026/04/11 02:14:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this exercise (ex09), I'm combining Strings with Pointers. 
   I've learned that in C, a string is just an array of characters, 
   and its name is actually the address of the first character. 
   I'll use a pointer to travel through the string and print it character by character.
*/

#include <unistd.h>

// This function takes a pointer to the first character of a string
void ft_putstr(char *str)
{
    // As long as the character pointed to by 'str' is not the null terminator '\0'
    while (*str != '\0')
    {
        // I write the current character to the screen. 
        // I use 'str' directly because it's already an address.
        write(1, str, 1);
        
        // This is the magic part: I increment the pointer (str++) 
        // to move it to the next character in memory.
        str++;
    }
}

int main()
{
    char *message = "Hi CNOS!\n";
    
    // Passing the string (the address of its first letter) to the function
    ft_putstr(message);

    return 0;
}