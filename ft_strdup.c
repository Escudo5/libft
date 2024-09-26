/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:46:13 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/26 12:39:51 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char *ft_strdup(const char *s)
{
	size_t i;
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	char *dup;
	dup = (char *)malloc((i + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	i = 0;

	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}	
	dup[i] = '\0';
	return	(dup);
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	const char *original = "hola mundo";
	char *duplicate = ft_strdup(original);
	if (duplicate == NULL)
    {
        printf("Error en la asignación de memoria\n");
        return 1; // Retorna un código de error si la asignación falla
    }
	printf("Cadena original: %s\n", original);
    printf("Cadena duplicada: %s\n", duplicate);
	free(duplicate);
	return 0;
}