#include <unistd.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int debut;
    int fin;
    int rev[size];
    int temp;

    debut = 0;
    fin = size - 1;
    while(debut < fin)
        {
        temp = tab[debut];
        tab[debut] = tab[fin];
        tab[fin] = temp;
        debut++;
        fin--;
    }
}
