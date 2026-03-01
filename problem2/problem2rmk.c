#include <stdio.h>

long	EvenFib(long n);

int	main(void)
{
	long    num = 1;
        long    sum = 0;
        long    E = 2;

        while (E < 4000000)
        {
                sum += E;
		num++;
		E = EvenFib(num);
        }
        printf("%li", sum);
	return 0;
}

// Even Fibonacci numbers
long	EvenFib(long n) 
{
	long	value;

	if (n == 1)
		return value = 2;
	if (n == 2)
		return value = 8;
	return (value = 4 * EvenFib(n - 1) + EvenFib(n - 2));
	/* 
	 This equation comes from the following result:

	 The Fibonacci relation
	 F(n) = F(n - 1) + F(n - 2) 
	      = F(n - 2) + F(n - 3) + F(n - 2)
	      = 2 * F(n - 2) + F(n - 3)
	      = 2 * (F(n - 3) + F(n - 4)) + F(n - 3)
	      = 3 * F(n - 3) + F(n - 4) + F(n - 4)
	      = 3 * F(n - 3) + F(n - 4) + F(n - 5) + F(n - 6)
	      = 3 * F(n - 3) + F(n - 3) + F(n - 6)
	      = 4 * F(n - 3) + F(n - 6)

	Considering n = 3k
	F(3k) = 4 * F(3(k - 1)) + F(3(k - 2))

	Knowing that the even Fibonacci numbers follow E(k) = F(3k), we get:

	E(k) = 4 * E(k - 1) + E(k - 2)
	*/
}
