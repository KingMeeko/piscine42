#include <unistd.h>

void    ft_putchar(char a)
    {
    write(1, &a, 1);
}

void    ft_print_alphabet(void)
    {
	int i;

	i = 122;
	while (i >= 97)
        {
        ft_putchar(i);
		i--;
	}
}