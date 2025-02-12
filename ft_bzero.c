/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessmiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:15:39 by oessmiri          #+#    #+#             */
/*   Updated: 2024/10/23 16:18:35 by oessmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

void	ft_bzero(void *s, size_t len)
{
	unsigned int	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (len > 0)
	{
		ptr[i] = 0;
		i++;
		len--;
	}
}
