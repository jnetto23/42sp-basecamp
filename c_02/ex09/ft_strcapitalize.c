/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarque2 <jmarque2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 07:49:38 by jmarque2          #+#    #+#             */
/*   Updated: 2021/06/16 18:05:42 by jmarque2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);
int		is_alpha(char str);
char	ft_strupcase(char str);
int		is_numeric(char str);

char	*ft_strcapitalize(char *str)
{
	unsigned long int		i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0' || i <= 10)
	{
		if (i > 0 && is_alpha(str[i]))
		{
			if (
				(
					is_alpha(str[(i - 1)]) || is_numeric(str[(i - 1)])
				) && (
					!is_alpha(str[(i + 1)]) || !is_numeric(str[(i + 1)])
					|| str[(i + 1)] == '\0'
				)
			)
			{
				i++;
				continue ;
			}
		}
		str[i] = ft_strupcase(str[i]);
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

int	is_alpha(char str)
{
	if (
		(str >= 'a' && str <= 'z')
		|| (str >= 'A' && str <= 'Z')
	)
		return (1);
	return (0);
}

char	ft_strupcase(char str)
{
	if (str >= 97 && str <= 122)
		str -= 32;
	return (str);
}

int	is_numeric(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}
