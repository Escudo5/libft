/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:33:02 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/24 11:16:37 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include "libft.h"
#include <stdio.h>

int main(void)
{
	const char *test_str = "Hello world";
	size_t len;
	len = ft_strlen(test_str);
	printf("longitud es %zu\n", test_str, len);
	return (0);
}
