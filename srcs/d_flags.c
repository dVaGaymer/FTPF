/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_flags.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 00:20:11 by alopez-g          #+#    #+#             */
/*   Updated: 2020/07/13 22:27:45 by alopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "Libft/includes/libft.h"

/*
** Function: apply_d_flags
** ------------------------
** 
** const char *pos: input string
** t_info *si:      info structure
** t_flags *sf:     flag structure
** int  n:          num to print
**
** TODO el signo negativo importa para el width
*/
void    apply_d_flags(const char *pos, t_info *si, t_flags *sf, char *str)
{
    int len_str;
    int len_total;
    int neg;
    int len;

    len = *str == '-' ? ft_strlen(str + 1) : ft_strlen(str);
    neg = *str == '-' ? 1 : 0;
    len_total = sf->prc > ft_strlen(str) - neg ? sf->prc + neg : ft_strlen(str);
    len_str = len_total == 0 || len_total == -1 ? ft_strlen(str) : len_total;
    len_total = sf->width > len_total ? sf->width : len_total;
    if (sf->zero && sf->prc == -1)
        len_str = len_total;
    if (!sf->neg)
        space(len_total - len_str, 0, si);
    write(1, "-", *str == '-' ? 1 : 0);
    space(len_str - ft_strlen(str), 1, si);
    *str = !sf->prc && *str == 48 ? ' ' : *str;
    *str = !sf->prc && *str == 32 && sf->width == 0 ? 0 : *str;
    ft_putstr_fd(*str == '-' ? str + 1 : str, 1);
    if (sf->neg)
        space(len_total - len_str, 0, si);
    si->t += ft_strlen(str);
}