/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:28:08 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/25 13:12:34 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t s_len;
    char *substr;
    size_t i;

    if (s == NULL)
        return (NULL);
    i = 0;
    while (i != '\0')
	    i++;
    if (start >= s_len)
        len = 0;
    else if (start + len > s_len)
        len = s_len - start;
    substr = (char *)malloc((len + 1) * sizeof(char));
    if (substr == NULL)
        return NULL;
    i = 0;
    while (i < len && s[start + i] != '\0')
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return substr;
}

#include <stdio.h>
int main()
{
    char *str = "Hello World";
    printf("%s\n", ft_substr(str, 5, 5));
    return 0;
}
	
