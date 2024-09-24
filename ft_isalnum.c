/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:07:40 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/24 13:20:34 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char a)
{
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')
		|| (a >= '0' && a <= '9'))
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include "libft.h"
int main(void)
{
	char a;
	a = '/';
	printf("'%c' is %s\n", a, ft_isalnum(a) ? "alnum" : "not alnum");
	return 0;
}