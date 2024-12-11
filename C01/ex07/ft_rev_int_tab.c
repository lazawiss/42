/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:52:19 by lzannis           #+#    #+#             */
/*   Updated: 2024/08/22 18:15:01 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[] = {45,4,89,63,7,123};
	int	size;
	size = 6;
	ft_rev_int_tab(tab, size);
	int i = 0;
	while (tab[i])
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
