/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 03:30:29 by marvin            #+#    #+#             */
/*   Updated: 2026/04/11 03:30:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this exercise (ex10), I'm tackling a classic challenge: calculating string 
   length using only pointers. This is a great way to show how I can navigate 
   memory by jumping from one address to the next and then calculating the distance.
*/

#include <stdio.h>

int ft_strlen(char *str)
{
    // I'm creating another pointer to track the starting position
    char *ptr = str;

    // I'll keep moving the pointer forward until I hit the '\0' wall
    while (*ptr != '\0')
    {
        ptr++;
    }

    // My result is the distance between the final address and the starting one
    return (ptr - str);
}

int main()
{
    char *text = "1337 Future";
    int length;

    length = ft_strlen(text);

    printf("The length of '%s' is: %d\n", text, length);

    return (0);
}