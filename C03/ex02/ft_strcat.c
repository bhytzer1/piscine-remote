/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 21:05:20 by dmandric          #+#    #+#             */
/*   Updated: 2025/11/03 22:33:17 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d;

	i = 0;
	d = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[d] != '\0')
	{
		dest[i + d] = src[d];
		d++;
	}
	dest[i + d] = '\0';
	return (dest);
}

#include<stdio.h>
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("DFJAIOJFPASJF");	
	}
	else
		printf("%s\n", ft_strcat(argv[1], argv[2]));
	return(0);
}
