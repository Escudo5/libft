/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:46:13 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/03 15:48:39 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dup;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
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
	return (dup);
}
/*
int	main(void)
{
	const char	*original = "hola mundo";
	char		*duplicate;

	duplicate = ft_strdup(original);
	if (duplicate == NULL)
	{
		printf("Error en la asignación de memoria\n");
		return (1); // Retorna un código de error si la asignación falla
	}
	printf("Cadena original: %s\n", original);
	printf("Cadena duplicada: %s\n", duplicate);
	free(duplicate);
	return (0);
}
*/