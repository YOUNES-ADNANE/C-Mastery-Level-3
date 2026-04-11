/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_average.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 21:51:47 by marvin            #+#    #+#             */
/*   Updated: 2026/04/11 21:51:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

float   ft_average(int *arr, int size)
{
        int     sum;
        int     i;

        sum = 0;
        i = 0;
        
        /* I'm looping through the array to calculate the total sum of all numbers */
        while   ( i < size )
        {
                sum = sum + arr[i];
                i++;
        }

        /* I'm dividing the sum by the size and using (float) to keep the decimal precision */
        return  ((float)sum / size);
}

int     main(void)
{
        int         grades[] = {15, 18, 12, 14, 10};
        float       result;

        /* I'm passing the array (which acts as a pointer) and its size to the function */
        result  =   ft_average(grades, 5);

        printf("The class average is: %.2f\n", result);

        return 0;
}