/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_float_setv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 02:31:42 by fnieto            #+#    #+#             */
/*   Updated: 2016/03/10 18:54:42 by fnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"
#include "cpugpu"

void		t_float_setv(t_float *res, const t_float a)
{
	int		size[1];
	int		i;

	size[0] = sizeof(res) / sizeof(t_float);
	i = -1;
	if (size[0] == 1)
		while (++i < size[0])
			res[i] = a;
	else
		while (++i < size[0])
			res[i] = a;
}
