/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 10:31:48 by marvin            #+#    #+#             */
/*   Updated: 2026/04/08 10:31:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this exercise (ex00), I'm kicking off Level 3 by learning how to 
   print text using the 'write' function. Instead of 'printf', I'm going 
   deeper into the system to manually send bytes to the standard output.
*/

#include <unistd.h> // This is the header where the 'write' function lives

int main()
{
    /* 
       1. I'm calling 'write' and providing three things:
          - The file descriptor (1), which means I want to print to the Screen.
          - The actual string I want to output.
          - The exact number of characters (16), including the newline and spaces.
    */
    write(1, "Hello C-Level 3\n", 16);

    return 0;
}
