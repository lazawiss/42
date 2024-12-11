/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:58:43 by lzannis           #+#    #+#             */
/*   Updated: 2024/08/26 22:28:47 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (!((str[i -1] >= 'A' && str[i -1] <= 'Z')
				|| (str[i -1] >= 'a' && str[i -1] <= 'z')
				|| (str[i -1] >= '0' && str[i -1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "Salut, co1mment tu vas ? 42mots quARAnte-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}*/
