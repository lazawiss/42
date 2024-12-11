/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 00:37:18 by lzannis           #+#    #+#             */
/*   Updated: 2024/09/04 23:23:18 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arc, char **arv)
{
	int	i;
	int	j;

	i = arc - 1;
	while (i > 0)
	{
		j = 0;
		while (arv[i][j])
		{
			write (1, &arv[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i--;
	}
	return (0);
}
