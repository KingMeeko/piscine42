/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:31:34 by dantremb          #+#    #+#             */
/*   Updated: 2022/02/24 15:57:24 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
	{
	write(1, &a, 1);
}

void	ft_write(int a, int b, int c)
	{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(c + 48);
	ft_putchar(',');
}

void	ft_print_comb(void)
	{
	int	a;
	int	b;
	int	c;

	a = 0;

	while (a < 10)
	{
	b = a + 1;
		while (b < 10)
		{
		c = b + 1;
			while (c < 10)
			{
				ft_write(a, b, c);
			c++;
			}
		b++;
		}
	a++;
	}
}
