/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:25:15 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/01 16:03:15 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void    ft_lstclear(t_list  **lst, void (*del)(void*))
{
    t_list *temp;
    
    if (!*lst || !del)
        return;
    while (lst-> next != NULL)
      {
        lst = lst->next;
      }
    del(lst -> content);
    free(lst);
}