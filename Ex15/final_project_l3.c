/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_project_l3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 10:16:37 by marvin            #+#    #+#             */
/*   Updated: 2026/04/12 10:16:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
        write   (1, &c, 1);
}

int     ft_strlen(char *str)
{
        char    *ptr = str;
        while   (*ptr)
                ptr++;
        
        return (ptr - str);
}

void    ft_putstr(char *str)
{
        while   (*str)
        {
                ft_putchar(*str);
                str++;
        }
}

void    ft_rev_str(char *str)
{
        int         i;
        int         len;
        char        temp;

        i = 0,
        len = ft_strlen(str);

        while   ( i < len / 2)
        {
                temp = str[i];
                str[i] = str[len - 1 - i];
                str[len - 1 - i] = temp;
                i++;
        }
}

int     main(void)
{
        char        msg[100];
        int                 n;

        ft_putstr("Enter a word: ");
        
        n = read(0, msg, 100);

        if  ( n > 0 )
            msg[n - 1]  =  '\0';

        ft_putstr("Original => ");
        ft_putstr(msg);
        ft_putchar('\n');

        ft_rev_str(msg);

        ft_putstr("Reversed => ");
        ft_putstr(msg);
        ft_putchar('\n');

        return 0;
}