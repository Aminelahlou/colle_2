/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 21:14:50 by atoulous          #+#    #+#             */
/*   Updated: 2015/11/01 23:44:14 by alahlou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "my_functions.h"

char	*ft_buffer(void)
{
	int		ct;
	int		n;
	char	buf[11];
	char	*temp;

	n = 10;
	ct = 1;
	temp = (char*)malloc(sizeof(char));
	*temp = '\0';
	while (n)
	{
		n = read(0, buf, 10);
		buf[n] = '\0';
		temp = ft_strdupcat(temp, buf, ct);
		if (!temp)
			return (0);
		ct++;
	}
	return (temp);
}
