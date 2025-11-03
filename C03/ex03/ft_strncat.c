/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 23:35:47 by dmandric          #+#    #+#             */
/*   Updated: 2025/10/29 23:35:48 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	p;

	i = 0;
	p = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[p] != '\0' && p < nb)
	{
		dest[i + p] = src[p];
		p++;
	}
	dest[i + p] = '\0';
	return (dest);
}

#include<stdio.h>

int	main(int argc, char *argv[])
{
	unsigned int	df;
	
	df = 2;
	if (argc <= 2)
	{
		printf("NONEEEE");
	}
	else
	{
		printf("%s\n", ft_strncat(argv[1], argv[2], df));
	}
	return(0);
}
