/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 23:51:44 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/19 00:48:53 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int main(int ac, char **av)
{
	int board[6][6] = {
	{0, 4, 3, 2, 1, 0},
	{4, 0, 0, 0, 0, 1},
	{3, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 2},
	{1, 0, 0, 0, 0, 2},
	{0, 1, 2, 2, 2, 0},
	};

	ft_print_board(board);
	if (ft_solve(board))
	{
		ft_putstr("\nVoila c'Est résolu !!!\n");
	}
	else
	{
		ft_putstr("\nJe suis désolé c'est impossible!\n");
	}
	ft_print_board(board);
	return (0);
  }