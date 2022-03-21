/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 23:50:31 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/21 00:58:45 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <stdlib.h>

int	**ft_init_board(int size)
{
	int		**board;
	int		row;
	int		col;

	row - 0;
	board = (malloc(sizeof(int) * size * size));
	while (row <= size)
	{
		col = 0;
		while (col <= size)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
	return (board);
}

void	ft_print_board(int **board)
{
	int	row;
	int	col;

	row = 1;
	while (row < 5)
	{
		col = 1;
		while (col < 5)
		{
			ft_putnbr(board[row][col]);
			ft_putchar(' ');
			col++;
		}
		row++;
		ft_putchar('\n');
	}
}

int	ft_try_number(int **board, int number, int row, int col)
{
	if (ft_is_valid(board, number, row, col))
	{
		board[row][col] = number;
		if (ft_solve(board))
		{
			return (1);
		}
		else
		{
			board[row][col] = 0;
		}
	}
	return (0);
}

int	ft_solve(int **board)
{
	int	row;
	int	col;
	int	number;

	row = 1;
	number = 1;
	while (row <= 5)
	{
		col = 0;
		while (col <= 5)
		{
			if (board[row][col] == 0)
			{
				while (number <= 4)
				{
					if (ft_try_number(board, number, row, col))
						return (1);
					number++;
				}
			}
		col++;
		}
	row++;
	}
	return (1);
}
