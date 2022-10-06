#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int i = 0;
	int len = 0;
	if (ac == 2)
	{
		while(av[1][i++])
			len++;
		len--;
		while(len >= 0)
		{
			ft_putchar(av[1][len]);
			len--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
