/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 23:51:44 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/21 00:58:44 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_print_board(int **board, int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(48 + nb % 10);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	value;

	i = 0;
	neg = 1;
	value = 0;
	while (str[i] <= 32)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
	}
	while (str[++i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		value = (str[i] - 48) + (value * 10);
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (value * neg);
	}
	return (0);
}

int	**ft_init_board(int size)
{
	int		**board;
	int		row;
	int		col;
	
	ft_putstr("\n malloc board \n");
	board = malloc((size * size * sizeof(int)) + 1);
	ft_putstr("\n malloc board done! \n");
	row = 0;
	while (row <= size - 1)
	{
		col = 0;
		while (col <= size - 1)
		{
			board[row][col] = 6;
			col++;
		}
		row++;
	}
	ft_print_board(board, size);
	ft_putstr("\n init board \n");
	return (board);
}

void	ft_print_board(int **board, int size)
{
	int	row;
	int	col;

	row = 0;
	while (row <= size - 1)
	{
		col = 0;
		while (col <= size - 1)
		{
			ft_putnbr(board[row][col]);
			ft_putchar(' ');
			col++;
		}
		row++;
		ft_putchar('\n');
	}
}

int	main(int ac, char **av)
{
	int		size;
	int		**board;

	size = ft_atoi(av[1]);
	ft_putstr("\n atoi setup! \n");
	board = ft_init_board(size);
	ft_putstr("\n print board \n");
	ft_print_board(board, size);
	ft_putstr("\n print board2 \n");
	return (0);
}
