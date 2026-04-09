/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_full_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 12:38:31 by marvin            #+#    #+#             */
/*   Updated: 2026/04/09 12:38:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this exercise (ex03), I'm learning how to read the entire content of a file. 
   Instead of guessing the size, I'll use a loop to read one character at a time 
   until I reach the end of the file, and then I'll make sure to close it properly.
*/

#include <unistd.h>
#include <fcntl.h>

int main()
{
    // I'm creating a single character variable 'c' to act as my temporary storage
    char c;
    
    // I'm opening "Test.text" to read from it
    int fd = open("Test.text", O_RDONLY);

    // 1. First, I'm checking if the file actually opened. 
    // If 'fd' is -1, it means something went wrong (like the file doesn't exist).
    if (fd == -1) {
        write(1, "Error opening file\n", 19); 
        return (1);
    }

    // 2. Now, I'm using a 'while' loop to read the file character by character.
    // As long as 'read' returns a value greater than 0, it means I haven't hit the end.
    while (read(fd, &c, 1) > 0)
    {
        // For every character I read, I immediately write it to the screen
        write(1, &c, 1);
    }

    // 3. Finally, I'm closing the file descriptor to free up system resources
    close(fd);
    
    return (0);
}