/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_luminosity.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 01:10:17 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/12 18:28:59 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "light.h"
#include "math3d.h"
#include "scene.h"
#include "options.h"
#include "libft.h"

double	get_luminosity(t_hit hit)
{
	t_vector	light_direction;
	double		luminosity;
	int			i;
	t_light		light;
	double		cur_luminosity;

	luminosity = 0;
	i = -1;
	while (++i < MAX_LIGHTS)
	{
		light = get_scene()->lights[i];
		if (light.intensity < 0.001)
			continue;
		light_direction = vec_normalize(
			vec_substract(get_location(&light), hit.location));
		if (!(trace_ray(create_ray(
				vec_add(hit.location, vec_multiply(hit.normal, 0.01)),
				light_direction, 
				0, 
				vec_length(
				vec_substract(hit.location, get_location(&light)))))
				.collided_shape))
		{
			cur_luminosity = light.intensity * vec_dot(hit.normal, light_direction);
			if (cur_luminosity > 0)
				luminosity += cur_luminosity;
		}
	}
	return (ft_dblmax(BACKGROUND_ILLUMINATION, ft_dblmin(1, luminosity)));
//		return (ft_dblmax(BACKGROUND_ILLUMINATION , get_scene()->lights[0].intensity
//			* vec_dot(hit.normal, vec_normalize(
//			vec_substract(hit.location, get_scene()->lights[0].object.location)))));
//	return (BACKGROUND_ILLUMINATION);
}
