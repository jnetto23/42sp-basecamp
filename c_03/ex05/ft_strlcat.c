/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarque2 <jmarque2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 04:08:40 by jmarque2          #+#    #+#             */
/*   Updated: 2021/06/19 07:17:03 by jmarque2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (ft_strlen(dest) >= size)
		return (ft_strlen(src) + size);
	i = ft_strlen(dest);
	j = 0;
	while (src[j] && i < (size - 1))
	{
		dest[(i + j)] = src[j];
		j++;
	}
	dest[(i + j)] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}
