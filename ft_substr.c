/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarawsh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:21:25 by mdarawsh          #+#    #+#             */
/*   Updated: 2024/09/02 15:51:38 by mdarawsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (s[start] == '\0' || len == 0)
	{
		return (NULL);
	}
	if ((ft_strlen(s) - start) >= len)
	{
		ptr = malloc(len);
		while (len--)
		{
			*ptr = s[start];
			ptr++;
			start++;
		}
		return (ptr);
	}
	else
		return (NULL);
}
