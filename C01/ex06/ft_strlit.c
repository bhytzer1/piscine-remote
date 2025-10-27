/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:25:17 by dmandric          #+#    #+#             */
/*   Updated: 2025/10/22 11:25:23 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	array1[] = "sternocleidomastoideo";
 	char	array2[] = "babbi";
 	
	printf("la parola %s e'lunga" ,array1);
	printf(" %d caratteri\n" ,ft_strlen(array1));
	printf("e la parola %s e' lunga %d carrateri\n", array2, ft_strlen(array2));
}*/
