/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessmiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:35:31 by oessmiri          #+#    #+#             */
/*   Updated: 2024/10/28 09:05:59 by oessmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

char	*ft_strnstr(const char *bog, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)bog);
	while (bog[i] && i < len)
	{
		j = 0;
		while (bog[i + j] && little[j]
			&& i + j < len
			&& bog[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&bog[i]);
		i++;
	}
	return (NULL);
}
