/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:57:34 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/06 20:31:45 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	int count;

	if (power < 0)
	{
		return (0);
	}
	if (power > 0)
	{
		count = nb * ft_recursive_power(nb, power - 1);
		return (count);
	}
	else
	{
		return (1);
	}
}
