/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 00:05:23 by alopez-g          #+#    #+#             */
/*   Updated: 2020/07/11 03:33:30 by alopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "Libft/includes/libft.h"

/*
** Function: process_in
** ---------------------
** Reads input string (only if % was found) and apply format depending on mod
** 
** const char *pos: input string
** t_info *si:      info structure
** t_flags *sf:     flag structure
*/
void    process_in(const char *pos, t_info *si, t_flags *sf)
{
    init_flags_struct(sf);
    check_flag_struct(pos, si, sf);
    if (mod_finder(pos, si, sf) == 'c')
        apply_c_flags(pos, si, sf, va_arg(si->ap, int));
    else if (mod_finder(pos, si, sf) == 's')
        apply_s_flags(pos, si, sf, va_arg(si->ap, char*));
    else if (mod_finder(pos, si, sf) == 'd' || mod_finder(pos, si, sf) == 'i')
        apply_d_flags(pos, si, sf, ft_itoa(va_arg(si->ap, int)));
    else if (mod_finder(pos, si, sf) == 'u')
        apply_d_flags(pos, si, sf, ft_itoa(va_arg(si->ap, unsigned int)));
    else if (mod_finder(pos, si, sf) == 'p')
        apply_p_flags(pos, si, sf, ft_itoa(va_arg(si->ap, int)));
    else if (mod_finder(pos, si, sf) == 'x')
        apply_x_flags(pos, si, sf, ft_itoa(va_arg(si->ap, int)));
    else if (mod_finder(pos, si, sf) == 'X')
        apply_x_flags(pos, si, sf, ft_itoa(va_arg(si->ap, int)));
}

/*
** Function: mod_finder
** ---------------------
** Look for the moddifier currently being used, also fills using *
**
** const char *pos: input string
** t_info *si:      info structure
** t_flags *sf:     flag structure
**
** returns:         char of found modifier
*/
char    mod_finder(const char *pos, t_info *si, t_flags *sf)
{
    int aux;

    aux = 0;
    while (ft_strchr(si->flags, *(pos + aux)))
        aux++;
    if (ft_strchr(si->mods, *(pos + aux)))
        return (*(pos + aux));
    return (0);
}