#include <stdio.h>

int	main(void)
{
	int	smallest = 1;

	for (int i = 2; i < 20; i++)
	{
		if (smallest % i != 0)
		{
			for (int j = 2; j <= i; j++)
			{
				if ((smallest * j) % i == 0)
				{
					smallest *= j;
					break;
				}
			}
		}
	}
	printf("%i\n", smallest);
	return (0);
}
