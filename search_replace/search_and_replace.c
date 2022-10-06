#include <unistd.h>

int	find_char(char c, char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] != c)
			i++;
		else
			return (1);
	}
	return (0);
}

void	replace_char(char a, char *b)
{
	char	tmp;
	tmp = a;
	a = *b;
	*b = tmp;
}

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
	}
}

int	main(int ac, char **av)
{
	int i = 0;
	if (ac == 4)
	{
		if (find_char(av[2][0], av[1]))
			{
				while(av[1][i])
				{
					if (av[2][0] == av[1][i])
					{
						av[1][i] = av[3][0];
					}
					i++;			
				}
				ft_putstr(av[1]);
			}
		else
			ft_putstr(av[1]);
	}
	else
		write(1, "\n", 1);
	return (0);
}
