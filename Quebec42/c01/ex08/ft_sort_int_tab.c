/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:22:42 by dantremb          #+#    #+#             */
/*   Updated: 2022/02/28 18:04:23 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
	{
	int	i;
	int	max;
	int	min;

	i = 0;
	while (i < size - 1)
	{
		min = i;
		max = i + 1;
		while (max < size)
		{
			if (tab[max] < tab[min])
			{
				min = max;
			}
			max++;
		}
		ft_swap(&tab[min], &tab[i]);
		i++;
	}
}
