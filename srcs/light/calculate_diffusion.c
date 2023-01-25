/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_diffusion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:34:43 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/25 13:05:05 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "light.h"
#include "math3d.h"
#include "scene.h"
#include "options.h"
#include "libft.h"

double	calculate_diffusion(t_hit hit)
{
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
			continue ;
		if (!(line_collision(
					vec_add(hit.location, vec_multiply(hit.normal, 0.0001)),
					get_location(&light))
				.collided_shape))
		{
			cur_luminosity = light.intensity
				* vec_dot(hit.normal, vec_normalize(
						vec_substract(get_location(&light), hit.location)));
			if (cur_luminosity > 0)
				luminosity += cur_luminosity;
		}
	}
	return (ft_dblmax(BACKGROUND_ILLUMINATION, ft_dblmin(1, luminosity)));
}
