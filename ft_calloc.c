/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:41:25 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/07 10:19:23 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}

/*#include <stdio.h>

int	main(void)
{
	int	*array;

	size_t count = 5;          // Número de elementos
	size_t size = sizeof(int); // Tamaño de cada elemento (un entero)
	// Llama a ft_calloc para asignar memoria
	array = (int *)ft_calloc(count, size);
	if (array == NULL)
	{
		printf("Error en la asignación de memoria\n");
		return (1); // Retorna un código de error si la asignación falla
	}
	// Muestra los valores iniciales del array
	printf("Array inicializado con calloc:\n");
	for (size_t i = 0; i < count; i++)
	{
		printf("array[%zu] = %d\n", i, array[i]);
			// Debería mostrar 0 para cada elemento
	}
	// Libera la memoria asignada
	free(array);
	return (0); // Termina el programa correctamente
}
*/
