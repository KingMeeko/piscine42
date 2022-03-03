/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:27:51 by marvin            #+#    #+#             */
/*   Updated: 2022/03/02 12:29:57 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i++, i < n)
	dest[i] = '\0';
	return (dest);
}
int	main(void)
{
	char	tab1[] = "1234";
	char	tab2[] = "abcd";

	printf("tab 1 = %s\n", tab1);
	printf("tab 2 = %s\n", tab2);
	ft_strncpy(tab2, tab1, 2);
	printf("tab 1 = %s\n", tab1);
	printf("tab 2 = %s\n", tab2);
}
