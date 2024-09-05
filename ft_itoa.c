/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataher <ataher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:07:05 by ataher            #+#    #+#             */
/*   Updated: 2024/09/05 11:07:16 by ataher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_number_of_digits(int n)
{
    int digits;

    digits = 0;
    if (n == 0)
        return (1);
    if (n < 0)
    {
        n = -n;
        digits++;
    }
    while (n > 0)
    {
        n = n / 10;
        digits++;
    }
    return (digits);
}

char    *ft_itoa(int n)
{
    int digits;
    char *str;
    int is_negative;

    if (n == -2147483648)
        return ft_strdup("-2147483648");
    digits = ft_number_of_digits(n);
    is_negative = (n < 0) ? 1 : 0;
    n = (n < 0) ? -n : n;
    str = malloc(sizeof(char) * (digits + 1));
    if (!str)
        return (NULL);
    str[digits] = '\0';
    while (digits > 0)
    {
        str[--digits] = (char)(n % 10 + '0');
        n = n / 10;
    }
    if (is_negative)
        str[0] = '-';
    return (str);
}