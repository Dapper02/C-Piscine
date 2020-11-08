/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:29:36 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/08 18:29:50 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int range;
	int *arr;

	i = 1;
	if (max < min)
		return (0);
	range = max - min;
	arr = malloc(range * sizeof(int));
	arr[0] = min;
	while (i < range)
	{
		arr[i] = arr[i - 1] + 1;
		i++;
	}
	return (arr);
}

