/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersect_plane.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:46:23 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/12 17:15:25 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"
#include "math3d.h"
#include "camera.h"
#include "math.h"
#include "libft.h"

t_intersect_result	intersect_plane(t_ray ray, t_shape plane)
{
	double		denominator;
	t_vector	delta;
	double		length;

	denominator = vec_dot(ray.direction, get_up_vector(&plane));
	length = ray.max_length + 2;
	if (ft_dblabs(denominator) > 0.0001)
	{
		delta = vec_substract(get_location(&plane), ray.origin);
		length = vec_dot(delta, get_up_vector(&plane)) / denominator;
	}
	return ((t_intersect_result){
		.first = length,
		.second = ray.max_length + 2
	});
}

/*
bool intersectPlane(const Vec3f &n, const Vec3f &p0, const Vec3f &l0, const Vec3f &l, float &t)
{
    // assuming vectors are all normalized
    float denom = dotProduct(n, l);
    if (denom > 1e-6) {
        Vec3f p0l0 = p0 - l0;
        t = dotProduct(p0l0, n) / denom; 
        return (t >= 0);
    }

    return false;
}
*/