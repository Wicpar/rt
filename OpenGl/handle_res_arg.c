/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_res_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:35:08 by jbyttner          #+#    #+#             */
/*   Updated: 2016/03/22 18:05:16 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

int		handle_res_arg(int ac, int *i, char **av)
{
	char		*tmp;
	t_options	*options;

	if (*i + 2 >= ac)
		return (1);
	options = get_options();
	tmp = av[++(*i)];
	while (*tmp)
		if (!(ft_isdigit(*tmp++)))
			return (1);
	options->res_x = ft_atoi(av[*i]);
	if (options->res_x < RES_MIN || RES_MAX < options->res_x)
		options->res_x = RES_DEFAULT;
	tmp = av[++(*i)];
	while (*tmp)
		if (!(ft_isdigit(*tmp++)))
			return (1);
	options->res_y = ft_atoi(av[*i]);
	if (options->res_y < RES_MIN || RES_MAX < options->res_y)
		options->res_y = RES_DEFAULT;
	return (0);
}
