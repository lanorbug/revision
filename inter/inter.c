#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int i = 0;
	int tab[128];
	if (ac == 3)
	{
		while (i < 128)
		{
			tab[i] = 0;
			i++;
		}
		i = 0;
		while (av[2][i])
		{	
			tab[(int)av[2][i]] = 1;
			i++;
		}
		i = 0;
		while (av[1][i])
		{
			if (tab[(int)av[1][i]] == 1)
			{
				ft_putchar(av[1][i]);
				tab[(int)av[1][i]] = 2;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
