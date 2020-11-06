/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:38:54 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/06 19:39:02 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int		ft_is_prime(int nb)
{
	int i;
	int j;
	int k;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		j = nb / i;
		k = i * j;
		if (nb == k)
			return (0);
		i++;
	}
	return (1);
}

int				ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (!ft_is_prime(i))
		i++;
	return (i);
}
