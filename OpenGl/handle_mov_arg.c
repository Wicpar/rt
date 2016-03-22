/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_mov_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:56:16 by jbyttner          #+#    #+#             */
/*   Updated: 2016/03/22 18:03:45 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

int		handle_mov_arg(int ac, int *i, char **av)
{
	char		*tmp;
	t_options	*options;

	if (*i + 1 >= ac)
		return (1);
	options = get_options();
	tmp = av[++(*i)];
	while (*tmp)
		if (!ft_isdigit(*tmp++))
			return (1);
	options->speed = ft_atoi(av[*i]);
	if (options->speed < DEPTH_MIN || DEPTH_MAX < options->speed)
		options->speed = DEPTH_DEFAULT;
	return (0);
}
