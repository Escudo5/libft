/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:54:13 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/24 16:04:21 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
