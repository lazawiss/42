/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 22:33:50 by lzannis           #+#    #+#             */
/*   Updated: 2024/09/01 22:34:41 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "HELLO LA TEAM";
	char stra[] = "HE1L*O LaA T2EAM";
	char strb[] = "";
	printf("%s\n", ft_strlowercase(str));
	printf("%s\n", ft_strlowercase(stra));
	printf("%s\n", ft_strlowercase(strb));
	return (0);
}*/
