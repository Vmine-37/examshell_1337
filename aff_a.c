#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int found = 0;
		while (av[1][i] != '\0' && found == 0)
		{
			if (av[1][i] == 'a')
			{
				write(1, "a", 1);
				found = 1;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
	write(1, "a\n", 2);
}
