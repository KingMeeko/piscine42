/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:05:01 by dantremb          #+#    #+#             */
/*   Updated: 2022/02/28 17:59:05 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char str)
{
	ft_write(1, &, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str[i])
	{
		ft_putchar(*str[i]);
		i++;
	}
}
int main(void)
{
	char	tab1[] = "1234";

	ft_putstr(&tab1);
}
