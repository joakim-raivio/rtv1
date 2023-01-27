/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersect_cone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:57:10 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/27 18:14:45 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"
#include "math3d.h"
#include "math.h"

static double	calc_a(double angle, t_ray ray, t_shape cone)
{
	return (cosh(angle) * vec_square(vec_substract(ray.direction,
				vec_multiply(cone.object.forward,
					vec_dot(ray.direction, cone.object.forward))))
		- sinh(angle) * pow(vec_dot(ray.direction, cone.object.forward), 2));
}

static double	calc_b(double angle, t_ray ray, t_shape cone,
t_vector location_delta)
{
	return (2 * cosh(angle) * vec_dot(vec_substract(ray.direction,
				vec_multiply(cone.object.forward,
					vec_dot(ray.direction, cone.object.forward))),
			vec_substract(location_delta,
				vec_multiply(cone.object.forward,
					vec_dot(location_delta, cone.object.forward))))
		- 2 * sinh(angle) * vec_dot(ray.direction, cone.object.forward)
		* vec_dot(location_delta, cone.object.forward));
}

static double	calc_c(double angle, t_shape cone, t_vector location_delta)
{
	return (cosh(angle) * vec_square(vec_substract(location_delta,
				vec_multiply(cone.object.forward,
					vec_dot(location_delta, cone.object.forward))))
		- sinh(angle) * pow(vec_dot(location_delta, cone.object.forward), 2));
}

t_intersect_result	intersect_cone(t_ray ray, t_shape cone)
{
	t_vector	location_delta;
	double		a;
	double		b;
	double		discriminant;
	double		angle;

	location_delta = vec_substract(ray.origin, cone.object.location);
	angle = atan(cone.object.scale.x / cone.object.scale.y);
	a = calc_a(angle, ray, cone);
	b = calc_b(angle, ray, cone, location_delta);
	discriminant = (b * b) - (4 * a * calc_c(angle, cone, location_delta));
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
