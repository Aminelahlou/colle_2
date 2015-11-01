/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 20:20:46 by atoulous          #+#    #+#             */
/*   Updated: 2015/11/01 23:38:07 by alahlou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_functions.h"

int	main(void)
{
	char *buffer;

	buffer = ft_buffer();
	if (!buffer)
	{
		ft_putstr("Erreur de Malloc");
		return (0);
	}
	ft_test(buffer);
	return (0);
}
