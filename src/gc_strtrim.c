/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalfar <saalfar@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:00:00 by ataher            #+#    #+#             */
/*   Updated: 2025/07/16 19:57:05 by saalfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Garbage collector aware version of strtrim
 * 
 * @param s1 String to trim
 * @param set Set of characters to trim
 * @return char* Pointer to trimmed string, or NULL on failure
 */
char	*gc_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	if (len == 0)
		return (gc_strdup(""));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = len - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	return (gc_substr(s1, start, end - start + 1));
}
