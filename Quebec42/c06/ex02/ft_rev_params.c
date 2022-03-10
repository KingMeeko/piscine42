/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:16:48 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/10 16:28:57 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 0)
	{
		i = argc - 1;
		while (i > 0)
		{
			ft_putstr(argv[i]);
			i--;
		}
	}
	return (0);
}
