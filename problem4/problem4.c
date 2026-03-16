// Largest Palindrome product
/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two
2-digit numbers is 9009 = 91 x 99.


Find the largest palindrome made from the product of two
3-digit numbers.
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		nb_digits(int n);
char	*itoa(int n);
bool	check_palindrome(int n);
void	biggest_palindrome(void);

int	main(void)
{
	biggest_palindrome();
	return (0);
}



int		nb_digits(int n)
{
	int	count = 0; // counting number of digits
	if (n >= 0 && n <= 9)
	{
		count += 1;
		return (count);
	}
	return (1 + nb_digits(n / 10));
}
	


char	*itoa(int n)
{
	int	sign = 1;
	if (n == -2147483648)
		return ("-2147483648");
	int	len = nb_digits(n); 
	if (n < 0)
		sign *= -1;
	char	*str = (char *) malloc(len + 1);
	if (str == NULL)
	{	
		free(str);
		return (NULL);
	}
	for (int i = len - 1; i >= 0; i--)
	{
		str[i] = sign * (n % 10) + '0';
		n /= 10;	
	}	
	if (sign == -1)
		str[0] = '-';
	str[len] = '\0';
	return (str);
}

bool	check_palindrome(int n)
{
	char	*str = itoa(n);
	for (int i = 0, len = strlen(str); i < len / 2; i++)
	{
		if (str[i] != str[len - i - 1])
			return false;
	}
	return true;
}

		
void	biggest_palindrome(void)
{
	int	c;
	int	biggest = 0;

	for (int a = 0; a < 999; a++)
	{
		for (int b = 0; b < 999; b++)
		{
			c = a * b;
			if (check_palindrome(c) == true && c > biggest)
				biggest = c;
		}
	}
	printf("%i\n", biggest);
}
