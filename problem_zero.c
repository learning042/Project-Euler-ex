#include <stdio.h>

int	main(void)
{
	long	number = 1;
	long	sum = 0;
	while (number <= 407000)
	{
		if (number * number % 2 != 0)
			sum += number * number;
		number++;
	}
	printf("%li\n", sum);
	return 0;
}


