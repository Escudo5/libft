/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 09:51:32 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/26 10:27:03 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if (s == NULL || f == NULL)
        return (NULL);
    size_t s_len;
    s_len = ft_strlen(s);
    size_t  i;
    i = 0;
    char* new_string;
    new_string = (char *)malloc((s_len + 1) * sizeof(char));
    if (new_string == NULL)
        return (NULL);
    while (i < s_len)
    {
        new_string[i] = f(i, s[i]);
        i++;
    }
    new_string[i] = '\0';
}

int main()
{
    char [] = "Hola mundo";
    
}
