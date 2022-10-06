#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{	
	(void)ac;
	char tab[128];
	int	i = 0;
	while (i < 128)
	{
		tab[i] = 0;
		i++;
	}
	i = 0;
	while (av[1][i])
	{
		if (tab[(int)av[1][i]] == 0)
		{
			ft_putchar(av[1][i]);
			tab[(int)av[1][i]] = 1;
		}
		i++;
	}
	i = 0;
	while (av[2][i])
	{
		if (tab[(int)av[2][i]] == 0)
		{
			ft_putchar(av[2][i]);
			tab[(int)av[2][i]] = 1;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
