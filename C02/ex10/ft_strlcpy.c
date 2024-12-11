/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:38:15 by lzannis           #+#    #+#             */
/*   Updated: 2024/08/26 22:37:10 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	while (src[i])
		i++;
	len = i;
	i = 0;
	while (i < (size - 1) && src[i] && size != 0)
	{
		dest[i] = src[i];
			i++;
	}
		dest[i] = '\0';
	return (len);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char dest[50] = "Hello";
	char src[] = "bananeiaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	printf("ma fonction : %u\n", ft_strlcpy(dest, src, 60));
	printf("vraie fonction : %zu\n", strlcpy(dest, src, 60));
	printf("%s\n", dest);
	return (0);
}*/
