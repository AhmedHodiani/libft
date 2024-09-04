/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarawsh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:39:30 by mdarawsh          #+#    #+#             */
/*   Updated: 2024/09/02 11:40:37 by mdarawsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_1;
	const char	*src_1;
	size_t		i;

	i = 0;
	dest_1 = dest;
	src_1 = src;
	if (src == dest)
		return (dest);
	while (i < n)
	{
		dest_1[i] = src_1[i];
		i++;
	}
	return (dest);
}
