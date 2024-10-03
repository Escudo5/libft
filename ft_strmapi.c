/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 09:51:32 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/03 15:48:22 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	size_t	i;
	char	*new_string;

	if (s == NULL || f == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	new_string = (char *)malloc((s_len + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	while (i < s_len)
	{
		new_string[i] = f(i, s[i]);
		i++;
	}
	new_string[s_len] = '\0';
	return (new_string);
}

/*
#include "libft.h"
#include <stddef.h>
#include <stdio.h>

// Función de transformación
char	transform_function(unsigned int index, char c)
{
	return (c + 1); // Por ejemplo,
		transforma cada carácter sumando 1 a su valor ASCII
}

int	main(void)
{
	char *original_string = "Hola";                                
		// Cadena de prueba
	char *result = ft_strmapi(original_string, transform_function);
		// Llama a ft_strmapi
	if (result != NULL)
	{
		printf("Cadena original: %s\n", original_string);
		printf("Cadena transformada: %s\n", result);
		free(result); // No olvides liberar la memoria asignada
	}
	else
	{
		printf("Error al transformar la cadena.\n");
	}
	return (0);
}
*/
