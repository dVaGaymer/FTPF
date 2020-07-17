/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 23:56:45 by alopez-g          #+#    #+#             */
/*   Updated: 2020/07/17 15:42:10 by alopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "Libft/includes/libft.h"

static void	adjust_flags(t_info *si, t_flags *sf)
{
	if (sf->width < 0)
	{
		sf->width = -sf->width;
		sf->neg = 1;
	}
	if (sf->prc < -1)
		sf->prc = -1;
	if (sf->neg && sf->zero)
		sf->zero = 0;
}

/*
** Function: check_flag_struct
** ----------------------------
** Once moddifier is found fills struct with input flags
**
** const char *pos: input string
** t_info *si:      info structure
** t_flags *sf:     flag structure
*/

void		check_flag_struct(const char *pos, t_info *si, t_flags *sf)
{
	int aux;

	aux = -1;
	while (ft_strchr(si->flags, *(pos + ++aux)))
	{
		if (!(sf->width) && sf->prc == -1 && *(pos + aux) == 42)
			sf->width = va_arg(si->ap, int);
		else if (sf->prc == -1 && *(pos + aux) == *(si->flags + 2)
		&& *(pos + aux + 1) == 42)
			sf->prc = va_arg(si->ap, int);
		if ((!(sf->width) && *(pos + aux) > 48 && *(pos + aux) <= 57
		&& sf->prc == -1))
			sf->width = ft_atoi(pos + aux);
		else if (*(pos + aux) == *(si->flags))
			sf->neg = 1;
		else if (*(pos + aux) == *(si->flags + 1) && !(sf->width))
			sf->zero = 1;
		else if (sf->prc == -1 && *(pos + aux) == *(si->flags + 2))
			sf->prc = (*(pos + aux + 1) >= 48 && *(pos + aux) <= 57)
			? ft_atoi(pos + aux + 1) : 0;
	}
	adjust_flags(si, sf);
	si->i = aux ? si->i + aux + 1 : si->i + 1;
}

/*
** Function: init_flag_struct
** ---------------------------
** Set flag struct content to 0
**
** t_flags *sf:     flag structure
*/

void		init_flags_struct(t_flags *sf)
{
	sf->neg = 0;
	sf->prc = -1;
	sf->ptr = 0;
	sf->width = 0;
	sf->zero = 0;
}

/*
** Function: init_info_struct
** ---------------------------
** Set info struct content to 0
**
** t_info *si: info structure
*/

void		init_info_struct(t_info *si)
{
	si->i = 0;
	si->t = 0;
	si->modsep = 0;
	si->flags = "-0.*123456789 ";
	si->mods = "cspdiuxX%%";
}
