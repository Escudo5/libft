/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:07:40 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/27 14:56:08 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(char a)
{
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z') || (a >= '0'
			&& a <= '9'))
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	char	a;

	a = '/';
	printf("'%c' is %s\n", a, ft_isalnum(a) ? "alnum" : "not alnum");
	return (0);
}
*/