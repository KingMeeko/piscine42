/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:27:51 by marvin            #+#    #+#             */
/*   Updated: 2022/03/07 12:57:43 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
