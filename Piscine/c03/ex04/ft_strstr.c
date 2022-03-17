/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:37:51 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/09 10:59:40 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	counter;
	int	index;

	counter = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[counter] != '\0')
	{
		index = 0;
		while (str[counter + index] == to_find[index])
		{
			if (to_find[index + 1] == '\0')
				return (str + counter);
			index++;
		}
		counter++;
	}
	return (0);
}
