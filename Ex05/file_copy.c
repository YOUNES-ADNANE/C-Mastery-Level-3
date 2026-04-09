/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 13:59:33 by marvin            #+#    #+#             */
/*   Updated: 2026/04/09 13:59:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this exercise (ex05), I'm building a "File Cloner." 
   My goal is to read everything from an existing file and 
   write it into a brand-new file, effectively creating a backup.
*/

#include <unistd.h>
#include <fcntl.h>

int main()
{
    char c;
    // 1. First, I'm opening my "Source" file in Read-Only mode
    int src = open("Test.text", O_RDONLY);
    
    // 2. Next, I'm opening (or creating) my "Destination" file.
    // I'm using O_TRUNC to make sure it's empty before I start writing.
    int dst = open("Copy.text", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    // I need to make sure both files opened correctly before proceeding
    if (src == -1 || dst == -1) return (1);

    // 3. The "Magic Loop": I read one character from the source (src)
    // and immediately write it to the destination (dst).
    while (read(src, &c, 1) > 0)
    {
        write(dst, &c, 1);
    }

    // 4. Finally, I'm closing both file descriptors to clean up
    close(src);
    close(dst);

    write(1, "File copied successfully!\n", 26);
    return (0);
}