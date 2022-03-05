#include <unistd.h>
void	ft_putchar(char c)
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

void ft_printBoard(int board[9][9], unsigned int size)
{
	int row;
	int col;

	row = 0;
	while (row < size)
	{
	col = 0;
	if (row % 3 == 0 && row != 0)
	{
		ft_putstr("-----------\n");
	}
	while (col < size)
	{
		if (col % 3 == 0 && col != 0)
		{
			ft_putstr("|");
		}
		ft_putnbr(board[row][col]);
		col++;
	}
	row++;
	ft_putchar('\n');
	}
}

int ft_isNumberInRow(int board[9][9], int number, int row)
{
	ft_putstr("\n in row ?! \n");
	int	i;

	i = 0;
	while (i < 9)
	{
		if (board[row][i] == number)
		{
		return (1);
		}
	i++;
	}
	return (0);
}
int ft_isNumberInCol(int board[9][9], int number, int col)
{
	ft_putstr("\n in col ? \n");
	int	i;

	i = 0;
	while (i < 9)
	{
		if (board[i][col] == number)
		{
		return (1);
		}
	i++;
	}
	return (0);
}

int ft_isNumberInBox(int board[9][9], int number, int row, int col)
{
	ft_putstr("\n in box ? \n");
	int localBoxRow = row - row % 3;
	int localBoxCol = col - col % 3;
	int i = localBoxRow;
	int ii = localBoxCol;

	while (i < localBoxRow + 3)
	{
		while (ii < localBoxCol + 3)
		{
			if (board[i][ii] == number)
			{
				return (1);
			}
			ii++;
		}
	i++;
	}
return (0);
}

int ft_isValidPlacement(int board[9][9], int number, int row, int col)
{
	if (ft_isNumberInRow(board, number, row) +
		ft_isNumberInCol(board, number, col) +
		ft_isNumberInBox(board, number, row, col) == 3)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_solveBoard(int board[9][9], unsigned int size)
{
	int row;
	int col;
	int numberToTry;

	row = 0;
	col = 0;
	numberToTry = 1;
	while (row < size)
	{
		row = 0;
		while(col < size)
		{
			if (board[row][col] == 0)
			{
				while (numberToTry <= size)
				{
					if (ft_isValidPlacement(board, numberToTry, row, col))
					{
						board[row][col] = numberToTry;
						if (ft_solveBoard(board, size))
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
			return (0);
			}
			col++;
		}
		row++;
	}
	return (1);
}

int main(void)
{
	unsigned int grid_size;

	grid_size = 9;
	int board[9][9] = {
	{0, 1, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0}
	};
	ft_printBoard(board, grid_size);
	if (ft_solveBoard(board, grid_size))
	{
		ft_putstr("\n Solved! \n");
	}
	else
	{
		ft_putstr("\nImpossible! \n\n");
	}
	ft_printBoard(board, grid_size);
	return (0);
  }
