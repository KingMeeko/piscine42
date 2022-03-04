/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:27:51 by marvin            #+#    #+#             */
/*   Updated: 2022/03/03 15:07:26 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	i = 0;
	if( size > 0 )
	{
		while(src[i] != '\0' && i < size)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	while(src[i])
		i++;
	return(i);
}

int		main(void)
{
	char	dest[10] = "123456789";
	char	*src = "abcdefg";
	unsigned int	size = 10;
	printf("source : %s\n", src);
	printf("dest : %s\n", dest);
	ft_strlcpy(dest, src, size);
	printf("dest : %s\n", dest);

}
