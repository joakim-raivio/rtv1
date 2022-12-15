/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:37:11 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/15 23:09:04 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHAPE_H
# define SHAPE_H
# include "tracing.h"

/*typedef struct	s_shape
{
	t_vector
}*/

typedef struct	s_intersect_result
{
	double	first;
	double	second;
}	t_intersect_result;

t_hit				intersect_shape(t_ray ray, t_object shape);
t_intersect_result	intersect_sphere(t_ray ray, t_object shape);

#endif
