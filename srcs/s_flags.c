/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_flags.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 00:23:44 by alopez-g          #+#    #+#             */
/*   Updated: 2020/07/12 04:13:37 by alopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "Libft/includes/libft.h"

/*
** Function: apply_s_flags
** ------------------------
** 
** const char *pos: input string
** t_info *si:      info structure
** t_flags *sf:     flag structure
** char *str:       str to print
*/
void    apply_s_flags(const char *pos, t_info *si, t_flags *sf, char *str)
{
    if (str == NULL && sf->prc >= 0 && sf->prc <= 6)
        return;
    if (str == NULL)
        str = "(null)";
    if (!sf->prc)
        str = "";
    if (sf->neg)
        write(1, str, sf->prc != -1 ? sf->prc : ft_strlen(str));
    space(sf->width - ft_strlen(str), sf->zero = 0, si);
    if (!sf->neg)
        write(1, str, sf->prc != -1 ? sf->prc : ft_strlen(str));
    si->t += sf->prc != -1 ? sf->prc : ft_strlen(str);
}