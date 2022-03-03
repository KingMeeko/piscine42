/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:27:51 by marvin            #+#    #+#             */
/*   Updated: 2022/03/03 12:05:22 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ii;

	i = 0;
	ii = 0;
	while (dest[i])
	i++;
	if (size < i)
	{
		while (src[ii])
			ii++;
		return (size + ii);
	}
	while (size > 0 && i < size - 1 && src[ii])
		dest[i++] = src[ii++];
	dest[i] = '\0';
	while (src[ii++])
		i++;
	return (i);
}

int		main(void)
{
	char	dest[50] = "123456";
	char	*src = "789";
	unsigned int	size = 10;
	ft_strlcat(dest, src, size);
	printf("%s\n", dest);
}
