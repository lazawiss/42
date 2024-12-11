#include <unistd.h>

void ft_putstr(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
int	main(int arc, char **arv)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (arc == 3)
	{
		while (arv[2][j])
		{
			if (arv[1][i] == arv[2][j])
				i++;
			if (!arv[1][i])
			{
				ft_putstr(arv[1]);
				return (0);
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
