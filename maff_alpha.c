#include <unistd.h>

int main()
{
	char a = 'a';
	char b = 'B';
	while (a <= 'y' && b <= 'Z')
	{
		write(1, &a, 1);
		a = a + 2;
		write (1, &b, 1);
		b = b + 2;
	}
	write(1, "\n", 1);
}
