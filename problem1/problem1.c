#include <stdio.h>

int	main(void)
{
	int	number = 1;
	int	sum = 0;

	while (number < 1000)
	{
		if (number % 3 == 0 || number % 5 == 0)
			sum += number;
		number++;
	}
	printf("%i\n", sum);
	return 0;
}




