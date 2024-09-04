/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarawsh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:02:37 by mdarawsh          #+#    #+#             */
/*   Updated: 2024/09/01 18:58:46 by mdarawsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	if (little == NULL)
		return ((char *)big);
	i = 0;
	while (len--)
	{
		j = 0;
		while (little[j])
		{
			if (big[i + j] == little[j])
				j++;
			if (little[++j] == '\0')
				return ((char *)big + i);
			else
				break ;
		}
		i++;
	}
	return (NULL);
}
