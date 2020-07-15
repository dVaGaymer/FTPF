/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 00:49:23 by alopez-g          #+#    #+#             */
/*   Updated: 2020/07/16 01:49:59 by alopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int ft_printf(const char *in, ...);
typedef struct  s_flags
{
    int neg;
    int width;
    int zero;
    int prc;
    int ptr;
}               t_flags;
typedef struct  s_info
{
    int     i;
    int     t;
    char    *flags;
    char    *mods;
    char    modsep;
    va_list ap;
}               t_info;
void    process_in(const char *pos, t_info *si, t_flags *sf);
char    mod_finder(const char *pos, t_info *si, t_flags *sf);

void    check_flag_struct(const char *pos, t_info *si, t_flags *sf);
void    init_info_struct(t_info *si);
void    init_flags_struct(t_flags *sf);

void    apply_c_flags(const char *pos, t_info *si, t_flags *sf, int c);
void    apply_s_flags(const char *pos, t_info *si, t_flags *sf, char *str);
void    apply_d_flags(const char *pos, t_info *si, t_flags *sf, char *str);
void    apply_p_flags(const char *pos, t_info *si, t_flags *sf, char *str);
void    apply_perc(const char *pos, t_info *si, t_flags *sf);
void    apply_x_flags(const char *pos, t_info *si, t_flags *sf, char *str);

void    space(int num, int zero, t_info *si);