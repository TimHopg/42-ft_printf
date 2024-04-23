/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:27:25 by thopgood          #+#    #+#             */
/*   Updated: 2024/04/10 18:04:27 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 

Converts lowercase char to uppercase

*/

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
