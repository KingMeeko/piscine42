/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:27:51 by marvin            #+#    #+#             */
/*   Updated: 2022/03/03 13:27:45 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char a[] = "AMSKIFhDRgsdgsgRRSGaeg";
	char b[] = "ab5283272349ndjk a";
	char c[] = "";

	printf("\nString a: %s\n", a);
	printf("String b: %s\n", b);
	printf("String c: %s\n", c);

	printf("\nResult a: %s\n", ft_strupcase(a));
	printf("\nResult b: %s\n", ft_strupcase(b));
	printf("\nResult a: %s\n", ft_strupcase(c));
}
