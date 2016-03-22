/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_map_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:43:53 by jbyttner          #+#    #+#             */
/*   Updated: 2016/03/22 18:04:15 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

int		handle_map_arg(int ac, int *i, char **av)
{
	char		*tmp;
	t_options	*options;

	if (*i + 1 >= ac)
		return (1);
	tmp = av[++(*i)];
	while (*tmp)
		if (!ft_isprint(*tmp++))
			return (1);
	options = get_options();
	options->map = av[*i];
	return (0);
}
