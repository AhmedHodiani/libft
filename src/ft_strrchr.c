/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataher <ataher@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:09:49 by mdarawsh          #+#    #+#             */
/*   Updated: 2025/01/04 02:44:37 by ataher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*start;

	start = (char *)s;
	str = start + ft_strlen(s);
	while (str != (start - 1))
	{
		if (*str == (char)c)
			return ((char *)str);
		str--;
	}
	return (NULL);
}
