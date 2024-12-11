/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:17:33 by lzannis           #+#    #+#             */
/*   Updated: 2024/08/24 17:34:31 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "abcd";
	char *stra = "adAdf";
	char *strb = "14209";
	char *strc = "*-+";
	char *strd = "ABCDEF";
	char *stre = "";
	printf("%d\n", ft_str_is_lowercase(str));
	printf("%d\n", ft_str_is_lowercase(stra));
	printf("%d\n", ft_str_is_lowercase(strb));
	printf("%d\n", ft_str_is_lowercase(strc));
	printf("%d\n", ft_str_is_lowercase(strd));
	printf("%d\n", ft_str_is_lowercase(stre));
	return (0);
}*/
