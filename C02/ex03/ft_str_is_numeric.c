/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:58:40 by lzannis           #+#    #+#             */
/*   Updated: 2024/08/24 17:12:31 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{	
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "01239";
	char *stra = "75ad";
	char *strb = "abced";
	char *strc = "";
	char *strd = "*-+=";
	printf("%d\n", ft_str_is_numeric(str));
	printf("%d\n", ft_str_is_numeric(stra));
	printf("%d\n", ft_str_is_numeric(strb));
	printf("%d\n", ft_str_is_numeric(strc));
	printf("%d\n", ft_str_is_numeric(strd));
	return (0);
}*/
