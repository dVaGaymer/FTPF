/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_flags.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 00:23:44 by alopez-g          #+#    #+#             */
/*   Updated: 2020/07/12 19:04:39 by alopez-g         ###   ########.fr       */
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
    int final_s_len;
    int final_t_len;
    int flag;

    flag = 0;
    if (str == NULL)
    {
        flag = 1;
        str = "(null)";
    }
    final_s_len = sf->prc != -1 && sf->prc < ft_strlen(str) ? sf->prc : ft_strlen(str);
    if (flag)
        final_s_len = sf->prc != -1 && sf->prc < 6 ? 0 : final_s_len;
    final_t_len = sf->width > final_s_len ? sf->width : final_s_len;
    if (sf->neg)
        write(1, str, final_s_len);
    space(final_t_len - final_s_len, sf->zero = 0, si);
    if (!sf->neg)
        write(1, str, final_s_len);
    si->t += final_s_len;
}