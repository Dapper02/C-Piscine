/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:41:57 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/05 22:33:04 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_recursive_factorial(int nb)
{
	int		value;

	if ((nb < 0) || (nb > 12))
	{
		return (0);
	}
	if (nb == 1) {
		return (1);
	}
	value = nb;
	return (value * ft_recursive_factorial(nb - 1));
}
