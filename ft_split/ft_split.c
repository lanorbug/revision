#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str)
{
	char **tab = malloc(sizeof(char *) * 50000);
	int i = 0;
	int j = 0;
	int k = 0;


	while (str[i] && str[i] == ' ')
		i++;
	while (str[i])
	{
		if (j == 0)
			tab[k] = malloc(sizeof(char) * 50000);
		if (str[i] == ' ')
		{
			tab[k][j] = '\0';
			j = 0;
			k++;
			while (str[i + 1] && str[i+1] == ' ')
				i++;
		}
		else
		{
			tab[k][j] = str[i];
			j++;
		}

		i++;
	}
	k++;
	tab[k] = '\0';
	return (tab);
}

int main(int ac, char **av)
{
	char **tab = ft_split(av[ac - 1]);
	int i = 0;

	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
