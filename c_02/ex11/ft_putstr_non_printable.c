/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarque2 <jmarque2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:33:33 by jmarque2          #+#    #+#             */
/*   Updated: 2021/06/16 20:12:12 by jmarque2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_str_is_printable(char c);
void	ft_putchar(char c);
void	ft_hex(char c);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_str_is_printable(str[i]);
		i++;
	}
}

void	ft_str_is_printable(char c)
{
	if (c < 32 || c > 127)
	{
		ft_putchar('\\');
		ft_hex(c);
	}
	ft_putchar(c);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex(char c)
{
	ft_putchar(c);
}
