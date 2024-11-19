/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataher <ataher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:44:58 by ataher            #+#    #+#             */
/*   Updated: 2024/11/19 08:53:09 by ataher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long double	ft_atof(char *str)
{
	long double	result;
	int			sign;
	long double	dot;

	sign = 1;
	dot = 1.0;
	result = 0.0;
	while (*str)
	{
		if (*str == '-')
			sign = -1;
		else if (*str == '+')
			sign = 1;
		if (*str == '-' || *str == '+')
			++str;
		else if (*str == '.')
			dot *= 10.0;
		else if (*str >= '0' && *str <= '9')
		{
			result = (result * 10.0) + (*str - '0');
			dot *= 10.0;
		}
		str++;
	}
	return (result / dot * sign);
}
