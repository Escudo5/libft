/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:05:33 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/03 15:48:18 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*#include <stdio.h>
int main()
{
	char str[] = "Hello World";
	char *ptr;
	ptr = ft_strchr(str, 'W');
	if (ptr != NULL)
		printf("Character found: %c\n", *ptr);
	else
		printf("Character not found\n");
}
*/