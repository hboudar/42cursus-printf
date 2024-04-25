/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 22:02:42 by hboudar           #+#    #+#             */
/*   Updated: 2023/11/23 23:36:16 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_2(char format, va_list list, int *count, char *hexa_upper)
{
	long	nbr;

	nbr = 0;
	if (format == 'i' || format == 'd')
	{
		nbr = va_arg(list, int);
		if (nbr < 0)
		{
			*count += ft_print_char('-');
			nbr = -nbr;
		}
		*count += ft_print_n(nbr, "0123456789", 10);
	}
	else if (format == 'X')
		*count += ft_print_n(va_arg(list, unsigned int), hexa_upper, 16);
}

void	ft_format_1(char format, va_list list, int *count, char *hexa_lower)
{
	if (format == 'c')
		*count += ft_print_char(va_arg(list, int));
	else if (format == '%')
		*count += ft_print_char('%');
	else if (format == 's')
		*count += ft_print_str(va_arg(list, char *));
	else if (format == 'u')
		*count += ft_print_n(va_arg(list, unsigned int), "0123456789", 10);
	else if (format == 'x')
		*count += ft_print_n(va_arg(list, unsigned int), hexa_lower, 16);
	else if (format == 'p')
	{
		*count += ft_print_str("0x");
		*count += ft_print_n((size_t)va_arg(list, void *), hexa_lower, 16);
	}
	else
		ft_format_2(format, list, count, "0123456789ABCDEF");
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		count;

	count = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	va_start(list, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1) != '\0')
			ft_format_1(*++str, list, &count, "0123456789abcdef");
		else if (*str != '%')
			count += ft_print_char(*str);
		str++;
	}
	va_end(list);
	return (count);
}
