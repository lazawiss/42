/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:30:16 by lzannis           #+#    #+#             */
/*   Updated: 2024/08/22 13:53:00 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{	
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int 	div;
	int	mod;

	a = 42;
	b = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d, mod = %d\n", div, mod);
	return (0);
}*/
