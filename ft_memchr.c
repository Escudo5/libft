/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:35:58 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/19 15:56:59 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;
	ptr = (unsigned char *)s;
	unsigned char target;
	target = (unsigned char)c;

	while (n--)
	{
		if (*ptr == target)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

