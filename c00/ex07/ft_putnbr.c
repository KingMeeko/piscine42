/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:46:55 by dantremb          #+#    #+#             */
/*   Updated: 2022/02/24 15:57:35 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void    ft_putnbr(int nb)
    {
    if(nb < 0)
    {
    ft_putchar('-');
    nb = nb*-1;
    }
    if(nb>9)
    {
    ft_putnbr(nb/10);
    ft_putnbr(nb%10);
    }
    else
    {
    ft_putchar(nb+48);
    }
}
