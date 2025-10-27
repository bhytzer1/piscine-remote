/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 22:27:31 by dmandric          #+#    #+#             */
/*   Updated: 2025/10/23 22:27:33 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '!' && str[i] <= '~')
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
	
	printf("%d\n", ft_str_is_printable(i));
}*/
