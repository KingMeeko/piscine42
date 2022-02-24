#include <unistd.h>

void    ft_put_char(char a)
        {
        write(1, &a, 1);
        }
