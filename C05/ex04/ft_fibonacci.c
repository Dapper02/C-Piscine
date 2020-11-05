/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 22:08:00 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/05 22:32:17 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	int i = 0;

	if(index < 0)
	{
		return (-1);
	}
	if(index == 0)
	{
		return (0);
	}
	if(index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
