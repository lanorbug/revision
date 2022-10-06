#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(int ac, char **av)
{
	int	i = 0;
	int	p = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{	
				p = av[1][i] - 'a';
				ft_putchar(((p + 13) % 26) + 'a');
			}
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				p = av[1][i] - 'A';
				ft_putchar(((p + 13) % 26) + 'A');
			}
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
