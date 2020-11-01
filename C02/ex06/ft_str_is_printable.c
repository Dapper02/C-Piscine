/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:37:54 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/01 19:38:33 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int c;

	c = 0;
	if (str[c] == '\0')
		return (1);
	while (str[c] != '\0')
	{
		if (str[c] >= 32 && str[c] <= 127)
			return (0);
		c++;
	}
	return (1);
}
