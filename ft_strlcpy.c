/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarawsh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:21:24 by mdarawsh          #+#    #+#             */
/*   Updated: 2024/08/28 10:47:39 by mdarawsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	dest_len;

	dest_len = 0;
	while (size > 0 && src[dest_len] != '\0')
	{
		dst[dest_len] = src[dest_len];
		dest_len++;
		size--;
	}
	dst[dest_len] = '\0';
	return (dest_len);
}
