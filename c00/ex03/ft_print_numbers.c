#include <unistd.h>

void    ft_putchar(char a)
    {
    write(1, &a, 1);
}

void    ft_print_alphabet(void)
    {
	int i;

	i = 48;
	while (i <= 57)
        {
        ft_putchar(i);
		i++;
	}
}