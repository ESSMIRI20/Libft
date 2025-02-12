/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessmiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:30:15 by oessmiri          #+#    #+#             */
/*   Updated: 2024/10/29 19:18:06 by oessmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static int	num_len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	func(char *s, int *n)
{
	if (*n == 0)
	{
		s[0] = '0';
		s[1] = '\0';
		return ;
	}
	else if (*n < 0)
	{
		s[0] = '-';
		*n = -(*n);
	}
}

char	*ft_itoa(int n)
{
	int				len;
	char			*s;
	int				i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = num_len(n);
	s = (char *)malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	func (s, &n);
	if (n == 0)
		return (s);
	i = len - 1;
	while (n > 0)
	{
		s[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	s[len] = '\0';
	return (s);
}
