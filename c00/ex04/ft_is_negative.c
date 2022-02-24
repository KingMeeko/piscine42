#include <unistd.h>

void    ft_putchar(char a)
    {
    write(1, &a, 1);
}

void    ft_is_negative(int x)
    {
    if(x>=0)
        {
        ft_putchar('P');
    }
    else
        {
        ft_putchar('N');
    }
}