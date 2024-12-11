/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:47:15 by lzannis           #+#    #+#             */
/*   Updated: 2024/09/03 02:21:11 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	base;

	i = 0;
	sign = 1;
	base = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		base = (base * 10) + (str[i] - '0');
		i++;
	}
	if (sign % 2 == 0)
		return (base * -1);
	return (base);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *str = "--+-++++1752 867hj96/2*58562";
	printf("%d\n", ft_atoi(str));
	char *stra = "-1752 867hj96/2*58562";
	printf("%d\n", atoi(stra));
	return (0);
}*/
