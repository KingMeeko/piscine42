/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:37:34 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/09 10:42:44 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	ii;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	ii = 0;
	while (src[ii] != '\0' && ii < nb)
	{
		dest[i + ii] = src[ii];
		ii++;
	}
	dest[i + ii] = '\0';
	return (dest);
}
