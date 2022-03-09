int	ft_sqrt(int nb)
{
	int i;
	int sq;

	i = 1;
	sq = 1;
	if(nb == 0)
		return(0);
	while (i * i < nb)
	{
		i++;
	}
	if ((nb % i) == 0)
		return (i);
	else
		return(0);
}
int main(void)
{
	printf("3 =%i \n", ft_sqrt(12));
	printf("4 =%i \n", ft_sqrt(45));
	printf("5 =%i \n", ft_sqrt(100));
	printf("6 =%i \n", ft_sqrt(150));
	printf("7 =%i \n", ft_sqrt(180));
	printf("10 =%i \n", ft_sqrt(10000));
}
