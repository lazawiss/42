/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 22:55:31 by lzannis           #+#    #+#             */
/*   Updated: 2024/09/04 23:32:57 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arc, char **arv)
{
	int	i;

	i = 0;
	if (arc > 0)
	{
		while (arv[0][i])
		{
			write (1, &arv[0][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}