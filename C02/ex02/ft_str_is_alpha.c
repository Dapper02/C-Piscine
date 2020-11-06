/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:16:50 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/06 19:58:30 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_str_is_alpha(char *str)
{
	int c;

	c = 0;
	if (str[c] == '\0')
	{
		return (1);
	}
	while (str[c] != '\0')
	{
		if ((str[c] >= 'a' && str[c] <= 'z') ||
		(str[c] >= 'A' && str[c] <= 'Z'))
		{
			return (1);
			c++;
		}
	}
	return (0);
}
