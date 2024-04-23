/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:19:10 by thopgood          #+#    #+#             */
/*   Updated: 2024/04/10 12:00:24 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Returns true if char is alpha or num(digit)

*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
