/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:30:54 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/08 18:30:57 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int		total_length(int size, char **strs, char *sep)
{
	int total;

	total = 0;
	total += ft_strlen(sep) * (size - 1);
	while (size)
	{
		total += ft_strlen(strs[size - 1]);
		size--;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*master;

	i = 0;
	if (size == 0)
		return (malloc(sizeof(char)));
	master = malloc(total_length(size, strs, sep) * sizeof(char));
	if (master == NULL)
		return (0);
	while (i < size)
	{
		ft_strcat(master, strs[i]);
		i++;
		if (i != size)
			ft_strcat(master, sep);
	}
	return (master);
}

