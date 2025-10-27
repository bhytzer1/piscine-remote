/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:23:01 by dmandric          #+#    #+#             */
/*   Updated: 2025/10/28 00:17:21 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char	*i)
{
	int	b;

	b = 0;
	while(i[b] != '\0')
	{
		b++;
	}
	return(b);
}

char	*ft_strncpy(char	*dest, char	*src, unsigned int n)
{
	unsigned int	sizedest;
	unsigned int	i;

	i = 0;
	sizedest = ft_strlen(dest);
	while (src[i] != '\0' && i < sizedest && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	if (i == sizedest && dest[i])
		dest[i] = '\0';
	return (dest);
}

/*#include<stdio.h>
#include<string.h>

int	main()
{
	int	i = 5;
	char n[7] = "skibidi";
	char m[7];
	
	strncpy(m, n, i);
	printf("%s\n",n);
	printf("%s\n", m);
	
}*/



