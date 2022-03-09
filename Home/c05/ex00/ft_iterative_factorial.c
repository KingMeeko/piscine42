#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb > 0)
		result = nb;
	else
		result = 0;
	nb--;
	while (nb >= 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
int main(void)
{
	int h = 13;
	printf("%i \n", ft_iterative_factorial(h));
}
