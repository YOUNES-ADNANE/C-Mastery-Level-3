/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 21:22:30 by marvin            #+#    #+#             */
/*   Updated: 2026/04/11 21:22:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_max(int *a, int *b)
{
        /* I am comparing the values that the pointers are pointing to */
        if ( *a > *b )
        {
                /* If 'a' is larger, I return its value */
                return (*a); 
        }
        
        else
        {
                /* If 'b' is larger or equal, I return 'b' */
                return (*b); 
        }
}

int     main(void)
{
        int     n1;
        int     n2;
        int     Result;

        n1 = 1337;
        n2 = 42;

        /* I am passing the addresses to the function and storing the result in 'Result' */
        Result = ft_max(&n1, &n2);

        printf("The maximum value: %d\n", Result);
        
        return 0;
}