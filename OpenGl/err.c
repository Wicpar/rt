/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 19:30:38 by fnieto            #+#    #+#             */
/*   Updated: 2016/04/30 16:29:57 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void		err(char *str)
{
	ft_putendl_fd(str, 2);
	exit(1);
}
