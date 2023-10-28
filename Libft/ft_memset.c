/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <bsarigul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 01:47:24 by bsarigul          #+#    #+#             */
/*   Updated: 2023/01/11 11:35:51 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{	
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)b;
	while (len > 0)
	{
		s[i] = (unsigned char)c;
		len--;
		i++;
	}
	return (b);
}
