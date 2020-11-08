/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:30:17 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/08 18:30:30 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int intervalo;
	int *buffer;

	i = 0;
	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	intervalo = max - min - 1;
	if ((buffer = malloc(intervalo * sizeof(int))) == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	while (i <= intervalo)
	{
		buffer[i] = min + i;
		i++;
	}
	i = 0;
	return (intervalo + 1);
}

