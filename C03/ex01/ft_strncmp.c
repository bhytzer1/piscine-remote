/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:11:49 by dmandric          #+#    #+#             */
/*   Updated: 2025/11/03 22:32:37 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include<stdio.h>

int	main()
{
	unsigned int	n;
	
	n = 3;
	printf("%d\n", ft_strncmp("ciaoo", "ciaooo", n));
	printf("%d\n", ft_strncmp("ciaoo", "ci", n));
	printf("%d\n", ft_strncmp("ci", "cia", n));
}
