#include <stdio.h>

int	main(void)
{
	long	num = 600851475143;
	int	i = 2; 
	while (num != 1)
	{
		if (num % i == 0)
			num /= i;
		i++;
	}
	printf("%i\n", i - 1);
}
