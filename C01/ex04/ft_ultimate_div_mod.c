/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:42:28 by dmandric          #+#    #+#             */
/*   Updated: 2025/10/19 20:42:29 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

/*#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	
	a = 16;
	b = 5;
	
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d\n", a, b);
}*/
