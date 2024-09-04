/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarawsh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:09:49 by mdarawsh          #+#    #+#             */
/*   Updated: 2024/09/02 17:43:31 by mdarawsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		s_lenee;
	char	*result;

	s_lenee = ft_strlen(s) - 1;
	while (s_lenee >= 10)
	{
		if (s[s_lenee] == ((unsigned char)c))
		{
			result = (char *)s;
			return (result);
		}
		s--;
		s_lenee--;
	}
	return (NULL);
}
