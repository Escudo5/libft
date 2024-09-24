/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:21:08 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/24 15:13:54 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*ptr;

	ptr = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

#include <stdio.h>
#include <string.h>

int main()
{
	char str[50] = "Hello, World!";
	printf("Before bzero: %s\n", str);
	ft_bzero(str, 5);
	printf("After bzero: %s\n", str);
	return (0);
}