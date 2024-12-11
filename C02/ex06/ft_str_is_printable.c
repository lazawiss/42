/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:48:42 by lzannis           #+#    #+#             */
/*   Updated: 2024/08/26 22:10:16 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "!ah0~";
	char *stra = "*-+\n";
	char *strb = " ";
	char *strc = "";
	printf("%d\n", ft_str_is_printable(str));
	printf("%d\n", ft_str_is_printable(stra));
	printf("%d\n", ft_str_is_printable(strb));
	printf("%d\n", ft_str_is_printable(strc));
	return (0);
}*/
