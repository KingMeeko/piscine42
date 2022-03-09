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

int		ft_find_next_prime(int nb)
{
	if (nb < 1)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}

int main(void)
{
	printf("3 =%i \n", ft_find_next_prime(3));
	printf("59 =%i \n", ft_find_next_prime(59));
	printf("79 =%i \n", ft_find_next_prime(79));
}
