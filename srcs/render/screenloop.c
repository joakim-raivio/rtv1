/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screenloop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:53:01 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/24 16:57:18 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "render.h"
#include "camera.h"
#include "tracing.h"

void	screenloop(void)
{
	int			x;
	int			y;
	t_image		*image;
	t_vector	camera_location;

	x = 0;
	y = 0;
	image = get_image();
	camera_location = get_camera()->location;
	while (y < SCREEN_H)
	{
		while (x < SCREEN_W)
		{
			add_pixel(image, x, y,
				get_hit_color(trace_ray((t_ray){
						.origin = camera_location,
						.direction = canvas_to_viewport(x, y),
						.min_length = MIN_TRACE_LENGTH,
						.max_length = MAX_TRACE_LENGTH}
						)));
			x++;
		}
		x = 0;
		y++;
	}
}
