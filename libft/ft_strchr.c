/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:36:39 by thopgood          #+#    #+#             */
/*   Updated: 2024/04/10 18:03:21 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Returns a pointer to the first occurrence of c in string s incl. '\0'.
Returns NULL if c is not found.

*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	str_len;

	i = -1;
	str_len = ft_strlen(s);
	while (++i < str_len + 1)
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	return (NULL);
}

/*
char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
*/