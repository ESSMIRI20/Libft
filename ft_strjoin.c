/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessmiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:20:10 by oessmiri          #+#    #+#             */
/*   Updated: 2024/10/31 17:09:09 by oessmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static char	*check(char const *s2, const char *s1)
{
	int		i;
	int		len_s1;
	int		len_s2;
	char	*s;	

	len_s1 = ft_strlen((char *) s1);
	len_s2 = ft_strlen((char *) s2);
	i = 0;
	s = (char *)malloc((len_s1 + len_s2) * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		s[i + len_s1] = s2[i];
		i++;
	}
	s[i + len_s1] = '\0';
	return (s);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (NULL);
	return (check(s2, s1));
}
