/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersect_cylinder.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:57:10 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/16 13:51:55 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"
#include "math3d.h"
#include "math.h"

t_intersect_result	intersect_cylinder(t_ray ray, t_shape cylinder)
{
	t_vector	location_delta;
	double		a;
	double		b;
	double		c;
	double		discriminant;

	location_delta = vec_substract(ray.origin, cylinder.object.location);
	a = vec_dot(vec_substract(ray.direction, 
		vec_multiply(cylinder.object.up,
		vec_dot(ray.direction, cylinder.object.up)))
		, vec_substract(ray.direction, 
		vec_multiply(cylinder.object.up,
		vec_dot(ray.direction, cylinder.object.up))));
	b = 2 * vec_dot(vec_substract(ray.direction, 
		vec_multiply(cylinder.object.up,
		vec_dot(ray.direction, cylinder.object.up))), 
		vec_substract(location_delta, 
		vec_multiply(cylinder.object.up,
		vec_dot(location_delta, cylinder.object.up))));
		c = vec_dot(vec_substract(location_delta, 
		vec_multiply(cylinder.object.up,
		vec_dot(location_delta, cylinder.object.up)))
		,vec_substract(location_delta, 
		vec_multiply(cylinder.object.up,
		vec_dot(location_delta, cylinder.object.up))))
	   	- (cylinder.object.scale.x * cylinder.object.scale.x);
	discriminant = (b * b) - (4 * a * c);
	if (discriminant < 0)
		return((t_intersect_result){
				.first = ray.max_length + 2,
				.second = ray.max_length + 2
			});
	return ((t_intersect_result){
			.first = (-b + sqrt(discriminant)) / (2 * a),
			.second = (-b - sqrt(discriminant)) / (2 * a)
		});
}
