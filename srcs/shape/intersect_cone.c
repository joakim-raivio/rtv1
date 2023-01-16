/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersect_cone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:57:10 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/16 14:57:42 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"
#include "math3d.h"
#include "math.h"

t_intersect_result	intersect_cone(t_ray ray, t_shape cone)
{
	t_vector	location_delta;
	double		a;
	double		b;
	double		c;
	double		discriminant;
	double		angle;

	location_delta = vec_substract(ray.origin, cone.object.location);
	angle = deg_to_rad(15);
	a = cosh(angle) * vec_dot(vec_substract(ray.direction, //todo: add angles to cone
		vec_multiply(cone.object.up,
		vec_dot(ray.direction, cone.object.up)))
		, vec_substract(ray.direction, 
		vec_multiply(cone.object.up,
		vec_dot(ray.direction, cone.object.up))))
		- sinh(angle) * pow(vec_dot(ray.direction, cone.object.up), 2);
	b = 2 * cosh(angle) * vec_dot(vec_substract(ray.direction, 
		vec_multiply(cone.object.up,
		vec_dot(ray.direction, cone.object.up))), 
		vec_substract(location_delta, 
		vec_multiply(cone.object.up,
		vec_dot(location_delta, cone.object.up))))
		- 2 * sinh(angle) * vec_dot(ray.direction, cone.object.up)
		* vec_dot(location_delta, cone.object.up);
	c = cosh(angle) * vec_dot(vec_substract(location_delta, 
		vec_multiply(cone.object.up,
		vec_dot(location_delta, cone.object.up)))
		,vec_substract(location_delta, 
		vec_multiply(cone.object.up,
		vec_dot(location_delta, cone.object.up))))
		- sinh(angle) * pow(vec_dot(location_delta, cone.object.up), 2);
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
