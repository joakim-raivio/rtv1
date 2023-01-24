/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersect_sphere.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:57:10 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/24 17:15:05 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"
#include "math3d.h"
#include "math.h"

t_intersect_result	intersect_sphere(t_ray ray, t_shape sphere)
{
	t_vector	sphere_location_delta;
	double		a;
	double		b;
	double		c;
	double		discriminant;

	sphere_location_delta = vec_substract(ray.origin, sphere.object.location);
	a = 1;
	b = 2 * vec_dot(ray.direction, sphere_location_delta);
	c = vec_dot(sphere_location_delta, sphere_location_delta)
		- (sphere.object.scale.x * sphere.object.scale.x);
	discriminant = (b * b) - (4 * a * c);
	if (discriminant < 0)
		return ((t_intersect_result){
			.first = ray.max_length + 2,
			.second = ray.max_length + 2
		});
	return ((t_intersect_result){
		.first = (-b + sqrt(discriminant)) / (2 * a),
		.second = (-b - sqrt(discriminant)) / (2 * a)
	});
}
