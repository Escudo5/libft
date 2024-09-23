/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:41:25 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/19 17:45:21 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t total_size = nmemb * size;
	
	void *ptr = malloc(total_size);
	
	if (ptr == NULL)
		return(NULL);

	memset(ptr, 0, total_size);

	return(ptr);
}
