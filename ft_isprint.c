/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:29:54 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/24 13:40:00 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include "libft.h"
int main(void)
{
	char a = '\0';
	printf("'%c' is %s\n", a, ft_isprint(a) ? "printable" : "not printable");
	return 0;
}