/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:55:28 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/10/29 11:56:41 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tab2;
	int	size2;
	int	swap;

	tab2 = 0;
	size2 = size - 1;
	while (tab2 < (size / 2))
	{
		swap = tab[tab2];
		tab[tab2] = tab[size2];
		tab[size2] = swap;
		tab2++;
		size2--;
	}
}
