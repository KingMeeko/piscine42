int ft_recursive_power(int nb, int power);

{
	if(nb < 0)
		return(0);
	if(nb ==0 || nb == 1)
		return(1);
	return nb * ft_recursive_power(nb - 1);
}
int main(void)
{
	int h = 5;
	printf("%i \n", ft_recursive_power(h));
}
