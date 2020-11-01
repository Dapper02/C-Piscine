/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:33:26 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/01 19:35:09 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int c;

	c = 0;
	if (str[c] == '\0')
		return (1);
	while (str[c] != '\0')
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
			return (1);
		c++;
	}
	return (0);
}
