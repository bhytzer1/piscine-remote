/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:10:26 by dmandric          #+#    #+#             */
/*   Updated: 2025/10/22 23:10:27 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	c = 5;
	int	x = 2;
	
	printf("c vale:%d e x vale:%d\n", c ,x);
	ft(&c, &x);
	printf("ora c vale: %d e x vale: %d", c ,x);
}
