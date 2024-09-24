/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:20:10 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/24 12:36:44 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;

	if (d == s)
	       return(dest);
	if (d < s || d >= s + n)
	{
		while (n--)
		*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;	
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}
