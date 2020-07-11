/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_flags.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 00:20:11 by alopez-g          #+#    #+#             */
/*   Updated: 2020/07/11 19:21:48 by alopez-g         ###   ########.fr       */
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
*/
void    apply_d_flags(const char *pos, t_info *si, t_flags *sf, char *str)
{
    int len;
    int len_p;
    int neg;

    neg = *str == '-' ? 1 : 0;
    len = ft_strlen(*str == '-' ? str + 1 : str);
    len_p = sf->prc > len ? sf->prc : len;
    len_p = sf->zero && sf->width && sf->width > len_p ? sf->width : len_p;
    sf->width = sf->width > len_p ? sf->width : 0;
    sf->zero = sf->neg ? 0 : sf->zero;
    sf->zero = sf->prc != -1 ? 1 : sf->zero;
    if (!sf->neg)
        space(sf->width - len_p, 0, si);
    write(1, "-", *str == '-' ? 1 : 0);
    space(len_p - len, 1, si);
    ft_putstr_fd(*str == '-' ? str + 1 : str, 1);
    if (sf->neg)
        space(sf->width - len_p, 0, si);
    si->t += len + (*str == '-' ? 1 : 0);
}