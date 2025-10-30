/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:16:19 by dmandric          #+#    #+#             */
/*   Updated: 2025/10/23 23:16:20 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include<stdio.h>

int	main(void)
{
	// char	*s1 = "falena";
	// char	*s2 = "figah";

	printf("%d\n", ft_strcmp("ciao", "ciao"));
	printf("%d\n", ft_strcmp("ciao", "filip"));
}*/
