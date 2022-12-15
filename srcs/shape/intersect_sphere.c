/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersect_sphere.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:57:10 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/15 22:03:57 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"
#include "vector.h"
#include "camera.h"
#include "math.h"

t_intersect_result	intersect_sphere(t_ray ray, t_object sphere)
{
	t_vector	sphere_location_delta;
	double		a;
	double		b;
	double		c;
	double		discriminant;

	sphere_location_delta = 
		vec_substract(get_camera()->location, sphere.location);
	a = vec_dot(ray.direction, ray.direction);
	b = 2 * vec_dot(sphere_location_delta, ray.direction);
	c = vec_dot(sphere_location_delta, sphere_location_delta)
	   	- sphere.scale.x * sphere.scale.x;
	discriminant = b * b - 4 * a * c;
	if (discriminant < 0)
		return((t_intersect_result){
				.first = ray.max_length + 2,
				.second = ray.max_length + 2
			});
	b *= -1; 
	return ((t_intersect_result){
			.first = (b + sqrt(discriminant)) / (2 * a),
			.second = (b - sqrt(discriminant)) / (2 * a)
		});
}
