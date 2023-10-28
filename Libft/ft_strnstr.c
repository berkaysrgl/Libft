/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <bsarigul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 22:39:42 by bsarigul          #+#    #+#             */
/*   Updated: 2023/01/12 11:45:54 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	i = -1;
	while (++i < len && *(haystack + i))
	{
		j = -1;
		while ((i + ++j) < len && *(haystack + i + j) == *(needle + j))
			if (!*(needle + j + 1))
				return ((char *)(haystack + i));
	}
	return (NULL);
}
