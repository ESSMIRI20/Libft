/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessmiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:12:47 by oessmiri          #+#    #+#             */
/*   Updated: 2024/10/28 10:53:08 by oessmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		c1;

	ptr = (const unsigned char *)s;
	c1 = (unsigned char)c;
	while (n--)
	{
		if (*ptr == c1)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
