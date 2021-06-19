/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarque2 <jmarque2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 09:37:30 by jmarque2          #+#    #+#             */
/*   Updated: 2021/06/15 15:18:17 by jmarque2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int n1, int n2)
{
	ft_putchar((n1 / 10) + '0');
	ft_putchar((n1 % 10) + '0');
	ft_putchar(' ');
	ft_putchar((n2 / 10) + '0');
	ft_putchar((n2 % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;
	int	limit_n1;
	int	limit_n2;

	limit_n1 = 98;
	limit_n2 = 99;
	n1 = 0;
	while (n1 <= limit_n1)
	{
		n2 = n1 + 1;
		while (n2 <= limit_n2)
		{
			ft_print(n1, n2);
			if (n1 != limit_n1 || n2 != limit_n2)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			n2++;
		}
		n1++;
	}
}
