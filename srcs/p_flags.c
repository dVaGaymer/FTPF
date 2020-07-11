/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_flags.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 03:22:53 by alopez-g          #+#    #+#             */
/*   Updated: 2020/07/11 19:50:33 by alopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "Libft/includes/libft.h"

/*
** Function: apply_p_flags
** ------------------------
** 
** const char *pos: input string
** t_info *si:      info structure
** t_flags *sf:     flag structure
** int  n:          num to print
*/
void    apply_p_flags(const char *pos, t_info *si, t_flags *sf, char *str)
{
    int len;
    int len_p;

    if (*str == 48 && sf->prc >= 0 && sf->prc <= 6)
        return;
    if (*str == 48)
        str = "(nil)";
    len = ft_strlen(str) + (*str == '(' ? 0 : 2);
    sf->prc = sf->prc != 0 && sf->prc != -1 ? sf->prc + 2: sf->prc;
    len_p = sf->prc > len ? sf->prc : len;
    len_p = sf->zero && sf->width && sf->width > len_p ? sf->width : len_p;
    sf->width = sf->width > len_p ? sf->width : 0;
    sf->zero = sf->neg ? 0 : sf->zero;
    sf->zero = sf->prc != -1 ? 1 : sf->zero;
    if (!sf->neg)
        space(sf->width - len_p, 0, si);
    write(1, "0x", *str == '(' ? 0 : 2);
    space(len_p - len, 1, si);
    ft_putstr_fd(str, 1);
    if (sf->neg)
        space(sf->width - len_p, 0, si);
    si->t += len;
    if (str && *str != '(')
        free(str);
}