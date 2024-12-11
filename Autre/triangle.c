#include <unistd.h>

void	triangle(int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j <= i)
		{
			write (1, "*", 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	triangle(3);
	return (0);
}
