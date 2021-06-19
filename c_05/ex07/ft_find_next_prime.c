/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarque2 <jmarque2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 05:08:28 by jmarque2          #+#    #+#             */
/*   Updated: 2021/06/19 05:18:13 by jmarque2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	else
	{
		while (nb < 2147483647 && !ft_is_prime(nb))
			nb++;
		return (nb);
	}
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (nb != i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
