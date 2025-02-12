/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessmiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:13:25 by oessmiri          #+#    #+#             */
/*   Updated: 2024/10/31 14:53:02 by oessmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*s;

	if (n == 0 || size == 0)
		return (malloc(1));
	s = (void *)malloc(n * size);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, (n * size));
	return (s);
}
