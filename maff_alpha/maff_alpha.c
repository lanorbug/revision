#include <unistd.h>

int	main(void)
{
	char c = 'a';
	char d = 'B';
	while (c <= 'y' && d <= 'Z')
	{
		write(1, &c, 1);
		write(1, &d, 1);
		c += 2;
		d += 2;
	}
	write(1, "\n", 1);
	return (0);	
}
