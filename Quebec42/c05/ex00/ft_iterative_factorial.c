/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:54:54 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/10 15:55:38 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb > 0)
		result = nb;
	else
		result = 0;
	nb--;
	while (nb >= 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
