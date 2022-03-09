int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);

	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	printf("3 =%i \n", ft_is_prime(3));
	printf("4 =%i \n", ft_is_prime(4));
	printf("5 =%i \n", ft_is_prime(5));
	printf("6 =%i \n", ft_is_prime(6));
	printf("7 =%i \n", ft_is_prime(7));
	printf("10 =%i \n", ft_is_prime(10));
}
