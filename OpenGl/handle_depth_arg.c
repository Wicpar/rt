/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_depth_arg.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:49:35 by jbyttner          #+#    #+#             */
/*   Updated: 2016/03/22 18:03:36 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

int		handle_depth_arg(int ac, int *i, char **av)
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
	options->depth = ft_atoi(av[*i]);
	if (options->depth < DEPTH_MIN || DEPTH_MAX < options->depth)
		options->depth = DEPTH_DEFAULT;
	return (0);
}
