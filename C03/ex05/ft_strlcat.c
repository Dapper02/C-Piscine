/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 23:50:50 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/04 22:03:48 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i = 0;
	int j = 0;
	
	while(dest[i] != '\0' && i < size)
	{
		i++;
	}
	
	while(src[j] != '\0' && (i + j + 1) < size)
	{
		dest[i] = src[j];
		i++;
    	j++;
	}
	if(i < size)
	{
		dest[i] = '\0';
	}
	return (dest);
}
