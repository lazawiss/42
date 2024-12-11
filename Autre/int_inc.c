#include <stdio.h>

void	ft_int_inc(int	*ptr)
{
	*ptr += 1;
}

int	main(void)
{
	int	i;
	int	*ptr;
	i = 0;
	ptr = &i;
	ft_int_inc(ptr);
	printf("%d", *ptr);
	return (0);
}
