/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:27:51 by marvin            #+#    #+#             */
/*   Updated: 2022/03/03 15:05:21 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
  int i;

  i = 0;
  while (str[i])
  {
		if ((i - 1 == 0 && str[i] != ' ')
		{
			|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			|| (str[i - 1] >= '1' && str[i - 1] <= '9'))
	}
	else if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
		i++;
	}
	return (str);
	}
}
int	main(void)
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char b[] = "sALUT, cOMMENT tU vAS ? 42mOTS qUARANTE-DEUX; cINQUANTE+ET+UN";

	printf("\nString a: %s\n", a);
	printf("String b: %s\n", b);

	printf("\nResult a: %s\n", ft_strcapitalize(a));
	printf("\nResult b: %s\n", ft_strcapitalize(b));
}