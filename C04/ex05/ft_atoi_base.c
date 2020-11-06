/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:51:09 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/06 17:53:06 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int i = 0;
	int val = 0;
	int sign = 1;

	while(str[i] == ' ' || str[i] == '\n' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f' || str[i] == '\t')
	{
		i++;
	}
	if(str[i] == '+')
	{
		i++;
	}
	else if(str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	while(str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			val = (val * 10) + (str[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}
	if(sign == -1)
	{
		val *= -1;
	}
	return (val);
}
