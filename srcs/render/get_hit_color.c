/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_hit_color.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:57:13 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/23 01:18:37 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tracing.h"
#include "color.h"
#include "shape.h"
#include "options.h"
#include "light.h"

unsigned int	get_hit_color(t_hit hit)
{
	t_color	color;

	if (hit.collided_shape == 0)
		return (BACKGROUND_COLOR);
	color = ((t_shape *)(hit.collided_shape))->color;
	color.brightness *= get_luminosity(hit);
	return (
			(unsigned int)(color.brightness * color.red * 255) << 16 | \
			(unsigned int)(color.brightness * color.green * 255) << 8 | \
			(unsigned int)(color.brightness * color.blue * 255)
			);
}
