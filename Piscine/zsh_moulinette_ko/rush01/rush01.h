/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 23:27:05 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/21 00:20:56 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH
# define FT_RUSH

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int	    ft_atoi(char *str);

int     ft_in_row(int **board, int number, int row);
int     ft_in_col(int **board, int number, int col);
int     ft_is_valid(int **board, int number, int row, int col);

int	    **ft_init_board(int size);
void    ft_print_board(int **board);
int	ft_try_number(int **board, int number, int row, int col);
int	    ft_solve(int **board);

#endif