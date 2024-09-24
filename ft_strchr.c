# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   ft_strchr.c                                        :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: smarquez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/18 14:05:33 by smarquez          #+#    #+#              #
#    Updated: 2024/09/18 15:11:43 by smarquez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include <string.h>

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    if ((char)c == '\0')
        return ((char *)s);
    return (NULL);
}

