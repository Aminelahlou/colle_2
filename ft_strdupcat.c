/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 12:03:38 by thifranc          #+#    #+#             */
/*   Updated: 2015/11/01 23:39:46 by alahlou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen2(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdupcat(char *dest, char *src, int ct)
{
	int		i;
	int		j;
	char	*dest2;

	j = 0;
	i = 0;
	dest2 = malloc(sizeof(char) * (ct * 10 + 1));
	if (!dest2)
		return (0);
	while (dest[i] != '\0')
	{
		dest2[i] = dest[i];
		i++;
	}
	while (src[j])
	{
		dest2[i + j] = src[j];
		j++;
	}
	dest2[i + j] = '\0';
	return (dest2);
}
