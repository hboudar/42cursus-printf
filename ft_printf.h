/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 22:03:04 by hboudar           #+#    #+#             */
/*   Updated: 2023/11/23 15:49:49 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_print_char(int c);
int	ft_print_str(char *s);
int	ft_print_n(unsigned long nbr, char *base, int devider);

#endif
