/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalfar <saalfar@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:00:00 by ataher            #+#    #+#             */
/*   Updated: 2025/07/16 19:58:07 by saalfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

/**
 * @brief Garbage collector aware version of split
 * 
 * @param s String to split
 * @param c Delimiter character
 * @return char** Array of strings, or NULL on failure
 */
char	**gc_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)gc_malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (i < word_count)
	{
		while (s[j] == c)
			j++;
		result[i] = gc_substr(s, j, word_len(&s[j], c));
		if (!result[i])
			return (NULL);
		j += word_len(&s[j], c);
		i++;
	}
	result[i] = NULL;
	return (result);
}
