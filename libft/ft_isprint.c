/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:41:41 by thopgood          #+#    #+#             */
/*   Updated: 2024/04/10 12:03:04 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Returns true if char is printable (between ASCII 32 and 126 incl.)

*/

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
