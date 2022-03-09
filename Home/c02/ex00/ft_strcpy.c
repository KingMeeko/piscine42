/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:27:51 by marvin            #+#    #+#             */
/*   Updated: 2022/03/02 12:27:21 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

int	main(void)
{
	char	tab1[] = "1234";
	char	tab2[] = "abcd";

	printf("tab 1 = %s\n", tab1);
	printf("tab 2 = %s\n", tab2);
	ft_strcpy(tab2, tab1);
	printf("tab 1 = %s\n", tab1);
	printf("tab 2 = %s\n", tab2);
}