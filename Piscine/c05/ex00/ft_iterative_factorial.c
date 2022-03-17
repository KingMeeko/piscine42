/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:54:54 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/13 14:44:26 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ii;

	i = 1;
	ii = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (++i <= nb)
	{
		ii = ii * i;
	}
	return (ii);
}
