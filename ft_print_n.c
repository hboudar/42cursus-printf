/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_n.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 22:51:55 by hboudar           #+#    #+#             */
/*   Updated: 2023/11/23 02:38:38 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_n(unsigned long nbr, char *base, int devider)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count += write(1, "-", 1);
		count = ft_print_n(-nbr, base, devider);
	}
	if (nbr > (unsigned long)devider - 1)
		count = ft_print_n(nbr / devider, base, devider);
	count += write(1, &base[nbr % devider], 1);
	return (count);
}
