/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:10:22 by dmandric          #+#    #+#             */
/*   Updated: 2025/10/20 15:10:24 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')||(str[i] != ' '))
		return(1);
		else
		return(0);		
	}
	return (1);
}

#include<stdio.h>

int	main()
{
	char	*str = "43423434";
	
	printf("%d\n", ft_str_is_alpha(str));
}
