/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 23:40:16 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/03 23:43:38 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i = 0;
	int j = 0;
	
	while(dest[i] != '\0')
		i++;
	
	while(j < nb)
	{
		dest[i] = src[j];
		i++;
    	j++;
	}
	
	dest[i] = '\0';
	
	return (dest);
}
