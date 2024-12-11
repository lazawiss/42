/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:51:09 by lzannis           #+#    #+#             */
/*   Updated: 2024/08/20 19:16:31 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 3;
	ft_swap(&a, &b);
	printf("a = %d, b = %d\n",a, b);
	return (0);
}*/
