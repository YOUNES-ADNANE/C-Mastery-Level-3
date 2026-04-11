/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 12:57:18 by marvin            #+#    #+#             */
/*   Updated: 2026/04/11 12:57:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* The function type is 'int' because I want it to return the total sum */
int ft_sum_array(int *arr, int size)
{
    int sum = 0;
    int i = 0;

    while (i < size)
    {
        /* I'm adding each number from the array to my sum */
        sum = sum + arr[i]; 
        i++;
    }
    
    /* This is the moment I return the final result */
    return (sum); 
}

int main()
{
    int numbers[] = {10, 20, 30, 40};
    int total;

    /* The function gives me the result, and I store it in 'total' */
    total = ft_sum_array(numbers, 4);

    printf("The total sum is: %d\n", total);
    
    return (0);
}