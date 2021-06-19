/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarque2 <jmarque2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 07:06:51 by jmarque2          #+#    #+#             */
/*   Updated: 2021/06/15 15:09:47 by jmarque2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char c1, char c2, char c3)
{
	ft_putchar(c1);
	ft_putchar(c2);
	ft_putchar(c3);
}

void	ft_print_comb(void)
{
	char	number_1;
	char	number_2;
	char	number_3;

	number_1 = '0';
	while (number_1 <= '7')
	{
		number_2 = number_1 + 1;
		while (number_2 <= '8')
		{
			number_3 = number_2 + 1;
			while (number_3 <= '9')
			{
				ft_print(number_1, number_2, number_3);
				if (number_1 != '7' || number_2 != '8' || number_3 != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				number_3++;
			}
			number_2++;
		}
		number_1++;
	}
}
