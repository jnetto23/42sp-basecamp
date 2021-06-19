/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarque2 <jmarque2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:09:28 by jmarque2          #+#    #+#             */
/*   Updated: 2021/06/15 20:19:05 by jmarque2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[(i + 1)])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			ft_sort_int_tab(tab, size);
		}
		i++;
	}
}
