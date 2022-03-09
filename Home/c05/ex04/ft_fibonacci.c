int ft_fibonacci(int index)
{
	if(index < 0)
		return(-1);
	if(index <=2)
		return(index);
	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}
int main(void)
{
	printf("%i \n", ft_fibonacci(0));
	printf("%i \n", ft_fibonacci(1));
	printf("%i \n", ft_fibonacci(2));
	printf("%i \n", ft_fibonacci(3));
	printf("%i \n", ft_fibonacci(4));
	printf("%i \n", ft_fibonacci(5));
	printf("%i \n", ft_fibonacci(6));
	printf("%i \n", ft_fibonacci(7));
	printf("%i \n", ft_fibonacci(8));
	printf("%i \n", ft_fibonacci(9));
}
