/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:45:06 by dantremb          #+#    #+#             */
/*   Updated: 2022/02/28 16:05:52 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
	{
	write(1, &a, 1);
}

void	ft_print_reverse_alphabet(void)
	{
	int	i;

	i = 122;
	while (i >= 97)
	{
		ft_putchar(i);
		i--;
	}
}
