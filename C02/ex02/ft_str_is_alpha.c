/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 00:28:33 by lzannis           #+#    #+#             */
/*   Updated: 2024/08/24 17:16:21 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "ab55def";
	char *stra = "12045";
	char *strb = "-+=?";
	char *strc = "";
	printf("%d\n", ft_str_is_alpha(str));
	printf("%d\n", ft_str_is_alpha(stra));
	printf("%d\n", ft_str_is_alpha(strb));
	printf("%d\n", ft_str_is_alpha(strc));
	return (0);
}*/
