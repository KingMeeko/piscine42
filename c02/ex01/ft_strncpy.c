/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:27:51 by marvin            #+#    #+#             */
/*   Updated: 2022/02/27 10:27:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i++, i < n)
	dest[i] = '\0';
	return (dest);
}
int main(){
	char c_arr[20] = "abcdefghijklmno";
	char c_arr2[20] = "12345678910111213";
	printf("%s\n", c_arr);
	printf("%s\n", c_arr2);
	ft_strncpy(&c_arr, &c_arr2, 10);
	printf("%s\n", c_arr);
	printf("%s\n", c_arr2);
}
