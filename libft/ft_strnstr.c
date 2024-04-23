/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timhopgood <timhopgood@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:17:24 by thopgood          #+#    #+#             */
/*   Updated: 2024/04/12 00:29:59 by timhopgood       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Needle in haystack. Locates little string within big string if found within
	first len bytes.

Returns:
- Pointer to first occurrence
- NULL if not found
- Pointer to big if little == 0

*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_little;

	if (big == NULL && len == 0)
		return (NULL);
	len_little = ft_strlen(little);
	if (len_little == 0)
		return ((char *)big);
	i = 0;
	while (big[i] && i + len_little <= len)
	{
		if (ft_strncmp(big + i, little, len_little) == 0)
			return ((char *)(big + i));
		++i;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	// null pointer and length of zero should not crash
	ft_strnstr(((void *)0), "fake", 0);
	strnstr(((void *)0), "fake", 0);

	//should seg fault
	ft_strnstr(((void *)0), "fake", 3);
	strnstr(((void *)0), "fake", 3);
}
 */