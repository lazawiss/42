/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:47:25 by lzannis           #+#    #+#             */
/*   Updated: 2024/08/21 23:33:59 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	temp = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j +1])
			{
				temp = tab[j];
				tab[j] = tab[j +1];
				tab[j +1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int tab[] = {8, 2, 7, 3};
	int	size;

	size = 4;
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]);
	return (0);
}*/
