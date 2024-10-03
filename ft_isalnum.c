/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:07:40 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/03 15:49:16 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0'
			&& c <= '9'))
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	char	c;

	c = '/';
	printf("'%c' is %s\n", a, ft_isalnum(a) ? "alnum" : "not alnum");
	return (0);
}
*/