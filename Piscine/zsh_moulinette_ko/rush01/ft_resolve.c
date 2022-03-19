/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 23:50:31 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/19 00:48:53 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void ft_print_board(int **board)
{
	int row;
	int col;

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

int ft_is_valid(int **board, int number, int row, int col)
{
	int vrow = ft_in_row(board, number, row);
	int vcol = ft_in_col(board, number, col);
	
	if ((vrow + vcol) > 1)
	{
	 return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_solve(int **board)
{
	int row;
	int col;
	int numberToTry;

	row = 1;
	numberToTry = 1;
	while (row <= 5)
	{
		col = 0;
		while(col <= 5)
		{
			if (board[row][col] == 0)
			{
				while (numberToTry <= 4)
				{
					if (ft_is_valid(board, numberToTry, row, col))
					{
						board[row][col] = numberToTry;
						if (ft_solve(board))
						{
							return (1);
						}
						else
						{
							board[row][col] = 0;
						}
					}
					numberToTry++;
				}
			}
		col++;
		}
	row++;
	}
	return (1);
}