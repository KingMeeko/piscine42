/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:27:51 by marvin            #+#    #+#             */
/*   Updated: 2022/02/27 10:27:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if(s1[i] == s2[i])
	{
		return 0;
	}
	else
	{
		return s1[i] - s2[i];
	}
}

int main(void)
{
	printf("3333 et 3333 = %d\n", ft_strcmp("3333", "3333"));
	printf("2222 et 1111 = %d\n", ft_strcmp("2222", "1111"));
	printf("1111 et 2222 = %d\n", ft_strcmp("1111", "2222"));
	return 0;
}
