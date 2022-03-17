/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:03:30 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/10 15:59:00 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if ((power == 0) || ((nb < 0) && (power == 0)))
		return (1);
	else
	{
		while (power > 0)
		{
			result = nb * result;
			power--;
		}
		return (result);
	}
}
