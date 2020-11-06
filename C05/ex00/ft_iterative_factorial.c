/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:37:24 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/06 20:27:08 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int count;

	count = 1;
	if (nb > 12)
		return (0);
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		count = count * nb;
		nb--;
	}
	return (count);
}
