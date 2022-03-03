/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:37:04 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/03 10:57:45 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (to_find[j])
			{
				j++;
				if (to_find[j] == '\0')
					return(0);
			}
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

int main(void)
{
    char *s1 = "hi how are you";
    char *s2 = "how are you today";
    char *p1;
		char *p2;

	p1 = ft_strstr(s1, s2);
	p2 = strstr(s1, s2);
	printf("faux : %s\n", p1);
	printf("vrai : %s\n", p2);
	return(0);
}
