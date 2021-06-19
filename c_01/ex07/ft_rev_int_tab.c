/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarque2 <jmarque2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 09:13:01 by jmarque2          #+#    #+#             */
/*   Updated: 2021/06/15 19:53:57 by jmarque2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[(size - i - 1)];
		tab[(size - i - 1)] = tab[i];
		tab[i] = swap;
		i++;
	}
}
