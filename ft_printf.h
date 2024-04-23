/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:04:00 by thopgood          #+#    #+#             */
/*   Updated: 2024/04/18 18:24:39 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

# define HEXUPPER_BASE "0123456789ABCDEF"
# define HEXLOWER_BASE "0123456789abcdef"
# define HEX_PREF "0x"
# define NIL_MSG "(nil)"
# define DEC_BASE "0123456789"
# define NULL_MSG "(null)"

int	ft_printdigit(long n, const char *base);
int	ft_printudigit(unsigned long long n, const char *base);
int	ft_printhex(unsigned long long n, char c);
int	ft_printptr(unsigned long long ptr);
int	ft_printdec(long n);
int	ft_printchar(int c);
int	ft_printstr(char *str);
int	ft_printf(const char *format, ...);

#endif