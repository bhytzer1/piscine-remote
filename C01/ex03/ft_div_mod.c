/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:27:29 by dmandric          #+#    #+#             */
/*   Updated: 2025/10/19 17:27:30 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include<stdio.h>

int	main(void)
{
	int d;
	int d1;
	int division;
	int module;
	
	d = 10;
	d1 = 5;
	
	ft_div_mod(d, d1, &division, &module);
	printf ("%d and %d\n", division, module);
}*/
