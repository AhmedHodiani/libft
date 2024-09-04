/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataher <ataher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:21:24 by mdarawsh          #+#    #+#             */
/*   Updated: 2024/09/04 15:07:14 by ataher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
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
