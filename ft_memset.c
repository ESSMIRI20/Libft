/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessmiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:05:56 by oessmiri          #+#    #+#             */
/*   Updated: 2024/10/27 10:46:04 by oessmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

unsigned char	*ft_memset(unsigned char *str, int n, size_t t)
{
	size_t	i;

	i = 0;
	while (i < t)
	{
		str[i] = n;
		i++ ;
	}
	return (str);
}
