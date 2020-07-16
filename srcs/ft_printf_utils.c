/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 00:05:23 by alopez-g          #+#    #+#             */
/*   Updated: 2020/07/16 04:12:55 by alopez-g         ###   ########.fr       */
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
    char    mod;

    mod = mod_finder(pos, si, sf);
    init_flags_struct(sf);
    if (mod)
        check_flag_struct(pos, si, sf);
    if (mod == 'c')
        apply_c_flags(pos, si, sf, va_arg(si->ap, int));
    else if (mod == 's')
        apply_s_flags(pos, si, sf, va_arg(si->ap, char*));
    else if (mod == 'd' || mod == 'i')
        apply_d_flags(pos, si, sf, ft_itoa(va_arg(si->ap, int)));
    else if (mod == 'u')
        apply_d_flags(pos, si, sf, ft_uitoa((unsigned int)va_arg(si->ap, unsigned int)));
    else if (mod == 'p')
        apply_p_flags(pos, si, sf, ft_itoab(va_arg(si->ap, size_t), "0123456789abcdef"));
    else if (mod == 'x')
        apply_d_flags(pos, si, sf, ft_itoab(va_arg(si->ap, size_t), "0123456789abcdef"));
    else if (mod == 'X')
        apply_d_flags(pos, si, sf, ft_itoab(va_arg(si->ap, size_t), "0123456789ABCDEF"));
    else if (mod == '%')
    {
        apply_perc(pos, si, sf);
        write(1, "%%", 1);
        si->t++;
    }
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
    while (ft_strchr(si->flags, *(pos + aux)) && *(pos + aux) != 0)
    {
        if (*(pos + aux) == 32)
            si->modsep = 1;
        aux++;
    }
    write(1, " ", si->modsep);
    si->t = si->modsep ? si->t + 1 : si->t;
    if (ft_strchr(si->mods, *(pos + aux)) && *(pos + aux) != 0)
        return (*(pos + aux));
    return (0);
}