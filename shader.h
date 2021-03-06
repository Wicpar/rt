/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shader.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 13:40:08 by jbyttner          #+#    #+#             */
/*   Updated: 2016/03/09 18:50:55 by fnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHADER_H
# define SHADER_H

#pragma OPENCL EXTENSION cl_khr_fp64 : enable
# define CONSTANT		__constant
# define CL_FUNC		static inline
# define AMBIENT		0.5

# define ITERATIONS		5
# define WHITE_MAT		{{0.9, 0.9, 0.9}, 10, 0}
# define BLUE_MAT		{{0, 0, 0.9}, 10, 0}
# define GREEN_MAT		{{0, 0.9, 0}, 10, 0}
# define RED_MAT		{{0.9, 0, 0}, 10, 0}
# define WHITE_GLOSSY	{{0.5, 0.5, 0.5}, 10, 0.8}
# define RED_MAT		{{0.9, 0, 0}, 10, 0.8}
# define MIRROR			{{0, 0, 0}, 1000, 1}

# define PLANE			0
# define SPHERE			1

typedef	struct		s_mat
{
	float3		color;
	float		shine_dampener;
	float		reflectivity;
}					t_mat;

typedef	struct		s_light
{
	float3		pos;
	float3		color;
}					t_light;

typedef	struct		s_geo
{
	size_t		type;
	t_mat		mat;
	float16		pms;
}					t_geo;

typedef	struct		s_cam
{
	float3		pos;
	float3		ray;
}					t_cam;

typedef	struct		s_ret
{
	float		t;
	float3		normal;
	float3		color;
	t_geo		object;
}					t_ret;

CONSTANT float	PI = 3.14159265358979323846;

#endif
