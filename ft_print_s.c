/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:17:26 by hboudar           #+#    #+#             */
/*   Updated: 2023/12/14 22:06:33 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char *s, t_menu *menu)
{
	int	len;

	len = 6;
	if (s)
	{
		len = 0;
		while (s[len])
			len++;
	}
	if (menu->precision && len > menu->lenght)
		return (menu->lenght);
	else
	{
		(*menu).lenght = len;
		return (len);
	}
}

void	ft_write_s(char *s, int *count, t_menu *menu)
{
	int	i;

	if (!s)
		ft_write_s("(null)", count, menu);
	else
	{
		i = 0;
		while (s[i] && i < menu->lenght)
		{
			*count += write(1, &s[i], 1);
			i++;
		}
	}
}

void	ft_print_s(char *s, t_menu *menu, int *count, char c)
{
	if (menu->width < ft_strlen(s, menu))
		ft_write_s(s, count, menu);
	else if (menu->minus)
	{
		menu->zero = 0;
		ft_write_s(s, count, menu);
		while (menu->width - ft_strlen(s, menu) > 0 && (*menu).width--)
			*count += ft_write_c(c);
	}
	else
	{
		if (menu->zero)
			c = '0';
		while (menu->width - ft_strlen(s, menu) > 0 && (*menu).width--)
			*count += ft_write_c(c);
		ft_write_s(s, count, menu);
	}
}
