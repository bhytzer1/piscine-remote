/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:54:53 by dmandric          #+#    #+#             */
/*   Updated: 2025/11/03 21:54:54 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	z;

	z = 0;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		z = 0;
		while (str[i + z] == to_find[z] && to_find[z] != '\0')
		{
			z++;
		}
		if (to_find[z] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*#include<stdio.h>

int	main()
{
	char str[] = "ciao brutti";
	char to_find[] = "b";
	printf("%s\n", ft_strstr(str, to_find));
}*/
