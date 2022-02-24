#include <unistd.h>

void    ft_swap(int *a, int *b)
    {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void    ft_sort_int_tab(int *tab, int size)
    {
    int i;
	int max;
	int min;

	i = 0;
    while (i < size - 1)
        {
        min = i;
        max = i + 1;
        while (max < size)
            {
            if (tab[max] < tab[min])
                {
                min = max;
            }
            max++;
        }
        ft_swap(&tab[min], &tab[i]);
        i++;
	}
}
