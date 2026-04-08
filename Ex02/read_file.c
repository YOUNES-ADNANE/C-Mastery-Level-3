/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_basics.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 13:13:11 by marvin            #+#    #+#             */
/*   Updated: 2026/04/08 13:13:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this exercise (ex02), I'm learning how to read data back from a file. 
   I'll open the file I created earlier, grab the text inside it, 
   and then output it to my screen to confirm I can retrieve stored information.
*/

#include <unistd.h>
#include <fcntl.h> // I need this header to use the 'open' function and read modes

int main()
{
    // 1. I'm creating a "buffer" (a char array of 1024 slots) to hold the text I'll read
    char data[1024];

    // 2. I'm opening the file "Test.text" in 'O_RDONLY' mode, which means Read Only
    int fd = open("Test.text", O_RDONLY);

    // 3. Now, I'm using 'read' to pull up to 16 characters from the file 
    // and store them into my 'data' array
    read(fd, data, 16);

    // 4. Finally, I'm using 'write' to display the first 10 characters 
    // of what I just read onto the screen (Descriptor 1)
    write(1, data, 10);

    return 0;
}