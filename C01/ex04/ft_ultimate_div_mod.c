/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:35:26 by lzannis           #+#    #+#             */
/*   Updated: 2024/08/25 20:12:06 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (*b > 0)
	{
		temp = *a;
		*a = *a / *b;
		*b = temp % *b;
	}
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("*a = %d, *b = %d\n", a, b);
       return (0);
}
