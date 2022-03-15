/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:21:55 by dantremb          #+#    #+#             */
/*   Updated: 2022/03/15 11:33:53 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
	{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

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

int	ft_strlen_total(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < (size - 1))
		{
			len += ft_strlen(sep);
		}
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char) * ft_strlen_total(size, strs, sep));
	if (size == 0 || tab == NULL)
	{
		return (tab);
	}
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(tab, sep);
		}
	i++;
	}
	return (tab);
}

int	main(int ar, char **av)
{
	char	*tab;
	int		i;

	tab = ft_strjoin(ar, av, "-");
	i = 0;
	printf("%s", tab);
}
