#include <unistd.h>

void    ft_putchar(char c)
    {
	write(1, &c, 1);
}

void	ft_putstr(char *str)
	{
	int i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_rev_print_params(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putstr(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv[])
{
	int i;

	if (argc > 0)
	{
		i = argc;
		while (i > 0)
		{
			ft_rev_print_params(argv[i]);
			i--;
		}
	}
	return (0);
}
