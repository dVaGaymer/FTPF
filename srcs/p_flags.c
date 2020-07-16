/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_flags.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 03:22:53 by alopez-g          #+#    #+#             */
/*   Updated: 2020/07/16 02:27:04 by alopez-g         ###   ########.fr       */
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
    int len_str;
    int len_total;
    int neg;
    int len;

    sf->width -= 2;
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
    write(1, "0x", 2);
    space(len_str - ft_strlen(str), 1, si);
    *str = !sf->prc && *str == 48 ? ' ' : *str;
    *str = !sf->prc && *str == 32 && sf->width == 0 ? 0 : *str;
    ft_putstr_fd(*str == '-' ? str + 1 : str, 1);
    if (sf->neg)
        space(len_total - len_str, 0, si);
    si->t += ft_strlen(str) + 2;
}

void    apply_perc(const char *pos, t_info *si, t_flags *sf)
{
    if (!sf->neg)
        space(sf->width - 1, sf->zero, si);
    write(1, "%%", 1);
    if (sf->neg)
        space(sf->width - 1, 0, si);
}