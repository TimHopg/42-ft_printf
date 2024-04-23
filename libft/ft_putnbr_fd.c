/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:03:04 by thopgood          #+#    #+#             */
/*   Updated: 2024/04/10 17:45:20 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Outputs integer 'n' to given file descriptor.

*/

#include "libft.h"

static long	ft_abs(long n)
{
	long	n_long;

	n_long = n;
	return (n_long *= ((n_long > 0) - (n_long < 0)));
}

static void	ft_putbase_fd(int n, const char *base, int fd)
{
	int		base_len;
	long	n_long;

	base_len = ft_strlen(base);
	if (n < 0)
		ft_putchar_fd('-', fd);
	n_long = ft_abs(n);
	if (n_long > (base_len - 1))
		ft_putbase_fd(n_long / base_len, base, fd);
	ft_putchar_fd(*(base + (n_long % base_len)), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	char const	*base;

	base = "0123456789";
	ft_putbase_fd(n, base, fd);
}
