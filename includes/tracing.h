/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tracing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:04:39 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/23 01:02:54 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRACING_H
# define TRACING_H
# include "vector.h"
# include "options.h"
# include "object.h"

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

t_hit			trace_ray();
unsigned int	get_hit_color(t_hit hit);

#endif
