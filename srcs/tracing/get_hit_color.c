/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_hit_color.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:57:13 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/25 13:49:27 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tracing.h"
#include "color.h"
#include "shape.h"
#include "options.h"
#include "light.h"
#include "libft.h"

unsigned int	get_hit_color(t_hit hit)
{
	t_color	color;

	if (hit.collided_shape == 0)
		return (BACKGROUND_COLOR);
	color = ((t_shape *)(hit.collided_shape))->color;
	color.brightness *= get_luminosity(hit);
	return ((unsigned int)(
		ft_intmin((int)(color.brightness * color.red * 255), 255) << 16
		| ft_intmin((int)(color.brightness * color.green * 255), 255) << 8
		| ft_intmin((int)(color.brightness * color.blue * 255), 255)
			));
}
