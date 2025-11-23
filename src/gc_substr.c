/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalfar <saalfar@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:00:00 by ataher            #+#    #+#             */
/*   Updated: 2025/07/16 19:57:29 by saalfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Garbage collector aware version of substr
 * 
 * @param s Source string
 * @param start Starting position
 * @param len Maximum length of substring
 * @return char* Pointer to substring, or NULL on failure
 */
char	*gc_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (gc_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)gc_malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
