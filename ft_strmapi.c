/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 09:51:32 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/26 13:02:58 by smarquez         ###   ########.fr       */
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

#include "libft.h"
#include <stdio.h>
#include <stddef.h>

// Función de transformación
char transform_function(unsigned int index, char c) {
    return c + 1; // Por ejemplo, transforma cada carácter sumando 1 a su valor ASCII
}

int main() {
    char *original_string = "Hola"; // Cadena de prueba
    char *result = ft_strmapi(original_string, transform_function); // Llama a ft_strmapi

    if (result != NULL) {
        printf("Cadena original: %s\n", original_string);
        printf("Cadena transformada: %s\n", result);
        free(result); // No olvides liberar la memoria asignada
    } else {
        printf("Error al transformar la cadena.\n");
    }

    return 0;
}
