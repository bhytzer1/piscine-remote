/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:53:00 by dmandric          #+#    #+#             */
/*   Updated: 2025/10/23 19:53:00 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0' && str[i] <= '9')
				|| (str[i] == ' ')))
			return (0);
		i++;
	}
	return (1);
}

/*#include<stdio.h>

int	main(void)
{
	char	*i = "3232323";

	printf("%d\n", ft_str_is_numeric(i));
}*/
