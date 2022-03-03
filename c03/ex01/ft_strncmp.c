/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:27:51 by marvin            #+#    #+#             */
/*   Updated: 2022/03/03 10:34:11 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int	ft_strncmp	(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	if(s1[i] == s2[i])
	{
		return	0;
	}
	else
	{
		return	s1[i] - s2[i];
	}
}

int	main(void)
{
	printf("3334 et 3333 n = 1 %d\n", ft_strncmp("3334", "3333", 1));
	printf("2322 et 1111 n = 2 %d\n", ft_strncmp("2322", "1111", 2));
	printf("2241 et 2252 n = 3 %d\n", ft_strncmp("2241", "22542", 3));
	return	0;
}
