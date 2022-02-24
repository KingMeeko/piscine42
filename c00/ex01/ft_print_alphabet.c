#include <unistd.h>

void    ft_putchar(char a)
    {
    write(1, &a, 1);
}

void    ft_print_alphabet(void)
    {
	int i;

	i = 97;
	while (i <= 122)
        {
        ft_putchar(i);
		i++;
	}
}