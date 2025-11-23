/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalfar <saalfar@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:00:00 by ataher            #+#    #+#             */
/*   Updated: 2025/07/16 19:58:14 by saalfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Garbage collector aware version of strdup
 * 
 * @param s String to duplicate
 * @return char* Pointer to duplicated string, or NULL on failure
 */
char	*gc_strdup(const char *s)
{
	char	*dest;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	dest = (char *)gc_malloc(len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
