int *ft_range(int min, int max);
{
	int *tab;
	int i;

	if (min >= max)
		return (null);
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
