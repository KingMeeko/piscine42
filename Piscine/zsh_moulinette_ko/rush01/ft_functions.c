/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 23:47:17 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/20 23:47:03 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"

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
