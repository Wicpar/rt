/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_options.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:11:56 by jbyttner          #+#    #+#             */
/*   Updated: 2016/03/22 18:24:40 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

static void	print_usage(t_option_arg *args)
{
	int		i;
	int		j;

	i = 0;
	ft_putendl("Usage:");
	while (i < NUM_ARGS)
	{
		ft_putchar('\t');
		ft_putstr(args[i].arg);
		j = 0;
		while (j++ < args[i].argcount)
		{
			ft_putchar('\t');
			ft_putstr("option");
		}
		i++;
		ft_putchar('\n');
	}
	err("Bad arguments\n");
}

static void	set_default_options(void)
{
	t_options	*options;

	options = get_options();
	options->map = 0;
	options->res_x = RES_DEFAULT;
	options->res_y = RES_DEFAULT;
	options->speed = SPEED_DEFAULT;
	options->depth = DEPTH_DEFAULT;
}

void		read_options(int ac, char **av)
{
	int					i;
	t_options			*options;
	t_option_arg		args[NUM_ARGS];
	int					j;

	args[0] = (t_option_arg){ "-res", handle_res_arg, 2 };
	args[1] = (t_option_arg){ "-map", handle_map_arg, 1 };
	args[2] = (t_option_arg){ "-speed", handle_mov_arg, 1 };
	args[3] = (t_option_arg){ "-depth", handle_depth_arg, 1 };
	options = get_options();
	set_default_options();
	i = 0;
	while (++i < ac)
	{
		j = 0;
		while (j < NUM_ARGS)
		{
			if (!(strcmp(args[j].arg, av[i])))
				if (args[j].f(ac, &i, av))
					print_usage(args);
			j++;
		}
	}
}
