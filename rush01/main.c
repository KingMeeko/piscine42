public class SudokuSolver {
  
  private static final int GRID_SIZE = 9;
  
  public static void main(String[] args) {
    
    int[][] board = {
        {7, 0, 2, 0, 5, 0, 6, 0, 0},
        {0, 0, 0, 0, 0, 3, 0, 0, 0},
        {1, 0, 0, 0, 0, 9, 5, 0, 0},
        {8, 0, 0, 0, 0, 0, 0, 9, 0},
        {0, 4, 3, 0, 0, 0, 7, 5, 0},
        {0, 9, 0, 0, 0, 0, 0, 0, 8},
        {0, 0, 9, 7, 0, 0, 0, 0, 5},
        {0, 0, 0, 2, 0, 0, 0, 0, 0},
        {0, 0, 7, 0, 4, 0, 2, 0, 3} 
      };
    
    printBoard(board);
    
    if (solveBoard(board)) {
      System.out.println("Solved successfully!");
    }
    else {
      System.out.println("Unsolvable board :(");
    }
    
    printBoard(board);
    
  }
  
  
  private static void printBoard(int[][] board) {
    for (int row = 0; row < GRID_SIZE; row++) {
      if (row % 3 == 0 && row != 0) {
        System.out.println("-----------");
      }
      for (int column = 0; column < GRID_SIZE; column++) {
        if (column % 3 == 0 && column != 0) {
          System.out.print("|");
        }
        System.out.print(board[row][column]);
      }
      System.out.println();
    }
  }


  private static boolean isNumberInRow(int[][] board, int number, int row) {
    for (int i = 0; i < GRID_SIZE; i++) {
      if (board[row][i] == number) {
        return true;
      }
    }
    return false;
  }
  
  private static boolean isNumberInColumn(int[][] board, int number, int column) {
    for (int i = 0; i < GRID_SIZE; i++) {
      if (board[i][column] == number) {
        return true;
      }
    }
    return false;
  }
  
  private static boolean isNumberInBox(int[][] board, int number, int row, int column) {
    int localBoxRow = row - row % 3;
    int localBoxColumn = column - column % 3;
    
    for (int i = localBoxRow; i < localBoxRow + 3; i++) {
      for (int j = localBoxColumn; j < localBoxColumn + 3; j++) {
        if (board[i][j] == number) {
          return true;
        }
      }
    }
    return false;
  }
  
  private static boolean isValidPlacement(int[][] board, int number, int row, int column) {
    return !isNumberInRow(board, number, row) &&
        !isNumberInColumn(board, number, column) &&
        !isNumberInBox(board, number, row, column);
  }
  
  private static boolean solveBoard(int[][] board) {
    for (int row = 0; row < GRID_SIZE; row++) {
      for (int column = 0; column < GRID_SIZE; column++) {
        if (board[row][column] == 0) {
          for (int numberToTry = 1; numberToTry <= GRID_SIZE; numberToTry++) {
            if (isValidPlacement(board, numberToTry, row, column)) {
              board[row][column] = numberToTry;
              
              if (solveBoard(board)) {
                return true;
              }
              else {
                board[row][column] = 0;
              }
            }
          }
          return false;
        }
      }
    }
    return true;
  }
  
  
  
}

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
	{0, 0, 2, 0, 0, 0, 6, 0, 0},
	{0, 0, 0, 0, 0, 3, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 5, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 3, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 7, 0, 0, 0, 0, 0},
	{0, 0, 0, 2, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 3}
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
