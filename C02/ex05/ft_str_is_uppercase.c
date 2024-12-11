/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:42:52 by lzannis           #+#    #+#             */
/*   Updated: 2024/08/24 17:55:25 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "ABCD";
	char *strb = "ABasFG";
	char *strc = "01769";
	char *strd = "-+*";
	char *stre = "";
	printf("%d\n", ft_str_is_uppercase(str));
	printf("%d\n", ft_str_is_uppercase(strb));
	printf("%d\n", ft_str_is_uppercase(strc));
	printf("%d\n", ft_str_is_uppercase(strd));
	printf("%d\n", ft_str_is_uppercase(stre));
	return (0);
}*/
