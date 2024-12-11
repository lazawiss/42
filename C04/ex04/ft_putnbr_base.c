/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 20:08:11 by lzannis           #+#    #+#             */
/*   Updated: 2024/09/04 00:03:35 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	if (i <= 1)
                return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	base_len;

	i = 0;
	base_len = ft_strlen(base);
	if (check_base(base))
		return ;
	if (nbr == -2147483648)
	{
		ft_putnbr_base(nbr / base_len, base);
		ft_putchar(base[nbr % base_len]);
		return ;
	}
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
		ft_putnbr_base(nbr, base);
		return;
	}
	if (nbr / base_len != 0)
		ft_putnbr_base(nbr / base_len, base);
	ft_putchar(base[nbr % base_len]);
}

int	main(void)
{
	ft_putnbr_base(2147483648,"420");

	return (0);
}
