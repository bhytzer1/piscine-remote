/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:25:39 by dmandric          #+#    #+#             */
/*   Updated: 2025/10/22 11:25:41 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - i -1] = temp;
		i++;
	}
}

/*int	main(void)
{
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(array) / sizeof(array[0]);

    ft_rev_int_tab(array, n);
    
    int i = 0; 
    while (i < n){
        printf("%d ", array[i]);
        i++;
        }
    printf("\n");
    return (0);
}*/
