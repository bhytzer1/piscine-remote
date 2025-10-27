/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 08:37:33 by dmandric          #+#    #+#             */
/*   Updated: 2025/10/20 08:37:34 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	char	*str = "cia davide";
	char	dest[11];
	
	ft_strcpy(dest, str);
	printf("src: %s\n", str);
	printf("dst: %s\n", dest);
	return(0);
}*/
