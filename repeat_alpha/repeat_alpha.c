#include <unistd.h>

void	print_alpha(char c)
{
	int	p = 0;
	if(c >= 'a' && c <= 'z')
		p = c - 97;
	else if(c >= 'A' && c <= 'Z')
		p = c - 65;
	while (p >= 0)
	{
		write(1, &c, 1);
		p--;
	}
}

int	main(int ac, char **av)
{
	int	i = 0;
	if (ac == 2)
	{
		while(av[1][i])
			{
				print_alpha(av[1][i]);
				i++;
			}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}

/*int	main(void)
{
	print_alpha('c');
	return (0);
}*/
