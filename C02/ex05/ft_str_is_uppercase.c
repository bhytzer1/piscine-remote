/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 22:21:54 by dmandric          #+#    #+#             */
/*   Updated: 2025/10/23 22:21:55 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else if (str[i] == ' ')
			return (1);
		else
			return (0);
	}
	return (1);
}

/*#include<stdio.h>

int	main(void)
{
	char *i = " ";
	
	printf("%d\n", ft_str_is_uppercase(i));
}*/
