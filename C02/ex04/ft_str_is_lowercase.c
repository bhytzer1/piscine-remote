/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:04:45 by dmandric          #+#    #+#             */
/*   Updated: 2025/10/23 21:04:46 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char	*i = " ";
	
	printf("%d\n", ft_str_is_lowercase(i));
}*/
