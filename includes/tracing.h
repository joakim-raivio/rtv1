/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tracing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:04:39 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/25 12:51:33 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRACING_H
# define TRACING_H
# include "options.h"
# include "object.h"
# include "math3d.h"

typedef struct s_hit
{
	t_vector	location;
	t_vector	direction;
	t_vector	normal;
	double		length;
	t_object	*collided_shape;
}	t_hit;

typedef struct s_ray
{
	t_vector	origin;
	t_vector	direction;
	double		min_length;
	double		max_length;
}	t_ray;

t_hit			trace_ray(t_ray ray);
unsigned int	get_hit_color(t_hit hit);
t_ray			create_ray(t_vector origin, t_vector direction,
				double min, double max);
t_hit			line_collision(t_vector from, t_vector to);

#endif
