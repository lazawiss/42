/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 00:47:14 by lzannis           #+#    #+#             */
/*   Updated: 2024/09/04 23:24:16 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char *a[], char *b[])
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_tab(char *tab[], int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size -1)
	{
		j = 1;
		while (j < size - 1)
		{
			if (ft_strcmp(tab[j], tab[j +1]) > 0)
			{
				ft_swap(&tab[j], &tab[j +1]);
			}
			j++;
		}
		i++;
	}
}

int	main(int arc, char **arv)
{
	int	i;
	int	j;

	i = 1;
	ft_sort_tab(arv, arc);
	while (i < arc)
	{
		j = 0;
		while (arv[i][j])
		{
			write (1, &arv[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
