/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:20:07 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/24 17:26:23 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
int ft_count_length(int n)
{
    int len;

    len = 0;
    if (n <= 0)
        len++;
    while (n != 0)
    {
        n = n / 10;
        len++;
    }
    return (len);
}
char *ft_itoa(int n)
{
    
    int len;
    char *str;
    int sign;

    len = ft_count_lenght(n);
    str = (char *)malloc(sizeof(char) * len + 1);
    if (!str)
        return (NULL);
    sign = n;
    if (n < 0)
        n = -n;
    str[len] = '\0';
    while (len--)
    {
        str[len] = n % 10 + '0';
        n = n / 10;
    }
    if (sign < 0)
        str[0] = '-';
    return (str);
}