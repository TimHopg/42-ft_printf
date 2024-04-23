/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:23:45 by thopgood          #+#    #+#             */
/*   Updated: 2024/04/14 12:53:35 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Applies function f to each character (passed by ptr) of string s.
f takes character's index as first argument and ptr to char as second.

*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}
