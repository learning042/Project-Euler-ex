#include <stdio.h>

long	Fib(long n);

int	main(void)
{
	long	num = 2;
	long	sum = 0;
	long	F = 2;

	while (F < 4000000)
	{
		F = Fib(num);
		if (F % 2 == 0)
			sum += F;
		num++;
	}
	printf("%li", sum);
}


// Fibonacci number
long	Fib(long n)
{
	long	value;

	if (n == 1)
		return value = 1;
	if (n == 2)
		return value = 2;
	return (value = Fib(n - 1) + Fib(n - 2));
}

