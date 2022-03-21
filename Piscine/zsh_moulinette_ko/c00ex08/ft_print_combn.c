/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 01:02:41 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/20 01:22:39 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_init_array(int *array, int max)
{
	int	i;

	i = 0;
	while (i < max)
	{
		array[i] = i;
		i++;
	}
}

void	ft_print_array(int *array, int max)
{
	int	i;

	i = 0;
	while (i < max)
	{
		ft_putchar(array[i] + 48);
		i++;
	}
	ft_putchar(',');
}

void	ft_print_combn(int max)
{
	int	array[10];
	int	position = max;
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

int main (void)
{
	ft_print_combn(2);
}
