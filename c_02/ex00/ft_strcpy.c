/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarque2 <jmarque2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 22:22:31 by jmarque2          #+#    #+#             */
/*   Updated: 2021/06/16 03:03:42 by jmarque2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	unsigned long int	i;

	i = 0;
	if (src[i] == '\0')
	{
		dest[i] = '\0';
		return (dest);
	}
	while (i == 0 || src[(i - 1)] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
