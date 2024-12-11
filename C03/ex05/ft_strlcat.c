/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:50:56 by lzannis           #+#    #+#             */
/*   Updated: 2024/08/28 19:19:55 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lendest;
	unsigned int	lensrc;

	i = 0;
	lendest = 0;
	lensrc = 0;
	while (dest[lendest])
		lendest++;
	while (src[lensrc])
		lensrc++;
	if (size == 0)
		return (lensrc);
	if (size <= lendest)
		return (lensrc + size);
	while (i < (size - lendest - 1) && src[i])
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + lensrc);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char dest[] = "Hello ";
	char src[] = "World !";
	printf("%u\n", ft_strlcat(dest, src, 15));
//      printf("%zu\n", strlcat(dest, src, 15));
       printf("%s\n", dest);
	return (0);
}*/
