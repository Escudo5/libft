/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:28:00 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/26 10:43:11 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stddef.h>
void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    if (s == NULL || f == NULL )
        return (NULL);
    size_t s_len;
    s_len = ft_strlen(s);
    size_t i;
    i = 0;
   while (s[i] != '\0')
   {
        f(i, &s[i]);
        i++;
   }
}