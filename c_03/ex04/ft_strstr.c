/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarque2 <jmarque2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 04:08:28 by jmarque2          #+#    #+#             */
/*   Updated: 2021/06/19 07:15:52 by jmarque2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		while (str[(i + j)] == to_find[j] && str[(i + j)])
		{
			if (to_find[(j + 1)] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
