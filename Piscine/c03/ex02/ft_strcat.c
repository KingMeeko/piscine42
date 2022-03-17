/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:37:15 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/09 10:41:26 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	ii;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	ii = 0;
	while (src[ii] != '\0')
	{
		dest[i + ii] = src[ii];
		ii++;
	}
	dest[i + ii] = '\0';
	return (dest);
}
