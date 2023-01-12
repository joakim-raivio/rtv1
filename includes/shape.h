/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:37:11 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/12 17:14:13 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHAPE_H
# define SHAPE_H
# include "tracing.h"
# include "object.h"
# include "color.h"

typedef struct	s_shape
{
	t_object	object;
	t_color		color;
}	t_shape;

typedef struct	s_intersect_result
{
	double	first;
	double	second;
}	t_intersect_result;

t_hit				intersect_shape(t_ray ray, t_shape *shape);
t_intersect_result	get_shape_intersects(t_ray ray, t_shape shape);
t_intersect_result	intersect_sphere(t_ray ray, t_shape sphere);
t_intersect_result	intersect_plane(t_ray ray, t_shape plane);
t_vector			get_shape_normal(t_shape shape, t_hit hit);
t_vector			get_sphere_normal(t_shape sphere, t_vector location);
t_vector			get_plane_normal(t_shape plane, t_hit hit);

#endif
