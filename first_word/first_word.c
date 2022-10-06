#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i = 0;
	if (ac == 2)
	{
		while(av[1][i] && (av[1][i] == '\t' || av[1][i] == ' '))
			i++;
		while(av[1][i] != ' ' && av[1][i] != '\t')
			ft_putchar(av[1][i++]);
	}
	write(1, "\n", 1);
	return (0);
}
