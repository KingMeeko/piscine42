/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conditions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 23:52:21 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/21 00:22:10 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int ft_in_row(int **board, int number, int row)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (board[row][i] == number)
		{
	 
		return (0);
		}
		else
		{
		i++;
		}
	}
	
	return (1);
}
int ft_in_col(int **board, int number, int col)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (board[i][col] == number)
		{
		return (0);
		}
		else
		{
		  i++;
		}
	}
	return (1);
}

int	ft_is_valid(int **board, int number, int row, int col)
{
	int	vrow = ft_in_row(board, number, row);
	int	vcol = ft_in_col(board, number, col);

	if ((vrow + vcol) > 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}