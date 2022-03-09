int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		return (nb * ft_recursive_power(nb, --power));
	return (nb);
}
int main(void)
{
	int h = 5;
	int e = 5;
	printf("%i \n", ft_recursive_power(h, e));
}
