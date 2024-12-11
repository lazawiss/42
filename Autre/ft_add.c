#include <stdio.h>

void	ft_add(int *ptr, int nbr)
{
	*ptr = nbr + *ptr;
}

int	main(void)
{
	int	nbr;
	int	i;
	int	*ptr;
	nbr = 3;
	i = 2;
	ptr = &i;
	ft_add(ptr, nbr);
	printf("%d", *ptr);
	return (0);
}


