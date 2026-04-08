/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_to_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 11:43:22 by marvin            #+#    #+#             */
/*   Updated: 2026/04/08 11:43:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this exercise (ex01), my instructor showed me how to create a new file 
   on my computer and write text inside it. Instead of showing the output 
   on the screen, I'm sending it straight into a physical file!
*/

#include <unistd.h>
#include <fcntl.h> // I need this library to use the file control options like 'open'

int main()
{
    // 1. First, I'm opening a file named "Test.text". 
    // I used 'O_WRONLY' to write only and 'O_CREAT' to create the file if it doesn't exist.
    int fd = open("Test.text", O_WRONLY | O_CREAT);

    // 2. Now, instead of using '1' (screen), I'm using 'fd' (the file I just opened) 
    // to write my message inside it.
    write(fd, "Hello C-Level 3\n", 16);

    return 0;
}