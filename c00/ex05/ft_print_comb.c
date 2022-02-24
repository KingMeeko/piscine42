#include <unistd.h>

void    ft_putchar(char a)
    {
    write(1, &a, 1);
}

void ft_write(int a,int b,int c)
    {
    ft_putchar(a + 48);
    ft_putchar(b + 48);
    ft_putchar(c + 48);
    ft_putchar(',');
}

void ft_print_comb()
    {
    int a = 0;
    int b = 1;
    int c = 2;

    while(a<=9)
        {
        b=a+1;
        while(b<=10)
            {
            c=b+1;
            while(c<=9)
                {
                ft_write(a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
}