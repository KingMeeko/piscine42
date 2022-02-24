#include <unistd.h>
#include <unistd.h>

void    ft_put_char(char a)
        {
        write(1, &a, 1);
        }

void    ft_init_array(int *array, int max)
        {
        int i = 0;
        while (i < max)
                    {
                    array[i] = i;
                    i++;
                    }
        }

void    ft_print_array(int *array, int max)
        {
        int i = 0;
        while(i < max)
                    {
                    ft_put_char(array[i] + 48);
                    i++;
                    }
        ft_put_char(',');
        }

void    ft_print_combn(int max)
        {
        int array[max];
        int position = max;
                        if (max <= 0 || max >= 10)
                            return ;
                        else
                        {
                        ft_init_array(array, max);
                        while (position > 0)
                                            {
                                            int maxnumber = 10;
                                            ft_print_array(array, max);
                                            while (position--)
                                                                {
                                                                int number = array[position];
                                                                if (number < --maxnumber)
                                                                                        {
                                                                                        do
                                                                                        {
                                                                                        array[position++] = ++number;
                                                                                        }
                                                                                        while (position < max);
                                                                                        break;
                                                                                        }
                                                                }
                                            }
                        }
        }