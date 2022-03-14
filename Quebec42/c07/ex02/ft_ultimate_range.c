#include <Stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min >= max)
        {
             *range = NULL;
             return (0);
        }
	tab = (int*)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
        {
             return (-1);
        }
        while (min != max)
	{
		tab[i] = min;
		i++;
		min++;
	}
        *range = tab;
	return (i);
}

int	main(void)
{
	int i = 0;
        int **tab;

	while (i < 10)
	{
		printf("%i \n", ft_ultimate_range(&tab, 60, 60)[i]);
		i++;
	}
}
