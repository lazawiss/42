/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 23:22:39 by lzannis           #+#    #+#             */
/*   Updated: 2024/08/20 13:15:53 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

void	ft_print_combn(int n)
{
	int	digit1;
	int	digit2;

	while (n <= 89)
	{
		digit1 = n / 10;
		digit2 = n % 10;
		if (digit1 < digit2)
		{
			ft_putnbr(digit1);
			ft_putnbr(digit2);
			if (n < 89)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		n++;
	}
}
/*
int	main(void)
{
	int	n;

	n = 2;
	ft_print_combn(n);
}*/
