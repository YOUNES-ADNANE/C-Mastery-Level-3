/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 13:34:22 by marvin            #+#    #+#             */
/*   Updated: 2026/04/09 13:34:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this exercise (ex04), I'm learning how to take what I type in the terminal 
   and save it directly into a file. I'm essentially turning my keyboard 
   into a data source that feeds into a permanent text file.
*/

#include <unistd.h>
#include <fcntl.h>

int main()
{
    char c;
    // 1. I'm opening (or creating) a file named "user_input.txt".
    // I used 'O_TRUNC' to clear the file if it already exists, 
    // and '0644' to set the standard read/write permissions.
    int fd = open("user_input.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    // If something goes wrong while opening, I'll just exit.
    if (fd == -1) return (1);

    write(1, "Type something (Press Enter + Ctrl+D to stop):\n", 47);

    // 2. Here's the magic: I'm reading from File Descriptor 0 (the Keyboard).
    // I'll keep reading as long as there is input.
    while (read(0, &c, 1) > 0)
    {
        // 3. Instead of printing to the screen, I'm writing 
        // each character directly into my file (fd).
        write(fd, &c, 1);
    }

    // 4. Once I'm done (Ctrl+D), I close the file to save everything.
    close(fd);
    return (0);
}