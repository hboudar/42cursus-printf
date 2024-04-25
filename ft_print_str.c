/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 22:47:11 by hboudar           #+#    #+#             */
/*   Updated: 2023/11/23 15:59:45 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *s)
{
	int	i;

	if (!s)
		return (ft_print_str("(null)"));
	i = 0;
	while (s[i])
	{
		ft_print_char(s[i]);
		i++;
	}
	return (i);
}
