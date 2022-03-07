/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:37:04 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/07 12:52:12 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)

{
	int	i;
	int	ii;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		ii = 0;
		while (str[i + ii] == to_find[ii])
		{
			if (to_find[ii + 1] == '\0')
				return (str + i);
			ii++;
		}
		i++;
	}
	return (0);
}
