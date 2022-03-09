/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:19:44 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/07 15:03:29 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	value;

	i = 0;
	neg = 1;
	value = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i++] == 45)
			neg *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = (str[i++] - 48) + (value * 10);
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (value * neg);
	}
	return (0);
}
