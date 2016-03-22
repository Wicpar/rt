/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 16:55:17 by jbyttner          #+#    #+#             */
/*   Updated: 2016/03/22 18:19:20 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTIONS_H
# define OPTIONS_H
# define RES_MIN 100
# define RES_MAX 1000
# define RES_DEFAULT 1000
# define DEPTH_MIN 1
# define DEPTH_MAX 10
# define DEPTH_DEFAULT 3
# define SPEED_DEFAULT 10
# define NUM_ARGS 4

typedef struct			s_options
{
	int					res_x;
	int					res_y;
	int					speed;
	int					depth;
	char				*map;
}						t_options;

typedef struct			s_option_arg
{
	char				*arg;
	int					(*f)(int, int *, char **);
	int					argcount;
}						t_option_arg;

/*
** The following argument functions return 0 on success.
** Any time they do not return null, read_options raises an error
*/

int						handle_res_arg(int ac, int *i, char **av);

int						handle_map_arg(int ac, int *i, char **av);

int						handle_mov_arg(int ac, int *i, char **av);

int						handle_depth_arg(int ac, int *i, char **av);

/*
** Public callable functions
*/

t_options				*get_options(void);

void					read_options(int ac, char **av);

#endif
