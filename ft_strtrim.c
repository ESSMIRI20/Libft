/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessmiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:44:35 by oessmiri          #+#    #+#             */
/*   Updated: 2024/10/31 16:19:25 by oessmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static int	check(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	char			*s2;
	unsigned int	n;
	unsigned int	n2;
	int				j;

	if (!s1 || !set)
		return (NULL);
	n2 = ft_strlen((char *) set);
	n = ft_strlen((char *) s1);
	i = 0;
	j = 0;
	if (n2 > n)
		return (NULL);
	while (s1[i] && check(s1[i], set))
		i++;
	while (i < n && check(s1[n - 1], set))
		n --;
	s2 = (char *)malloc((n - i + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	while (i < n)
		s2[j++] = s1[i++];
	s2[j] = '\0';
	return (s2);
}
