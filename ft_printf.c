/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:28:33 by thopgood          #+#    #+#             */
/*   Updated: 2024/04/18 17:49:27 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_format(char specifier, va_list *args)
{
	if (specifier == 'c')
		return (ft_printchar(va_arg(*args, int)));
	else if (specifier == 's')
		return (ft_printstr(va_arg(*args, char *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_printdec((va_arg(*args, int))));
	else if (specifier == 'u')
		return (ft_printdec(va_arg(*args, unsigned int)));
	else if (specifier == 'x' || specifier == 'X')
		return (ft_printhex((va_arg(*args, unsigned int)), specifier));
	else if (specifier == 'p')
		return (ft_printptr(va_arg(*args, unsigned long long)));
	else if (specifier == '%')
		return (ft_printchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *format, ...)
{
	int		return_length;
	int		temp_length;
	va_list	args;

	return_length = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			temp_length = ft_print_format(*(++format), &args);
			if (temp_length == -1)
				return (-1);
			return_length += temp_length;
		}
		else
		{
			if (write(1, format, 1) == -1)
				return (-1);
			return_length += 1;
		}
		++format;
	}
	va_end(args);
	return (return_length);
}
