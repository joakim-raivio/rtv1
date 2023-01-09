/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_inspect.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:43:18 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/09 16:56:39 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"
#include "options.h"
#include "tracing.h"
#include "vector.h"
#include "render.h"
#include "camera.h"

int	mouse_inspect(int x, int y)
{
	t_hit		hit;
	t_vector	direction;

	if (x >= 0 && x < SCREEN_W && y >= 0 && y < SCREEN_H)
	{
		direction = canvas_to_viewport(x, y);
		hit = trace_ray((t_ray){
						.origin = get_camera()->location,
						.direction = canvas_to_viewport(x, y),
						.min_length = MIN_TRACE_LENGTH,
						.max_length = MAX_TRACE_LENGTH});
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		print_vector(direction);
		print_rotation(vec_to_rot(direction));
		print_vector(vec_add(hit.location, vec_multiply(hit.direction, hit.length)));
		print_quaternion(rot_to_quat((t_rotation){
				.yaw = deg_to_rad(HORIZONTAL_FOV * (((double)x / SCREEN_W) - 0.5)),
				.pitch = deg_to_rad(VERTICAL_FOV * (((double)y / SCREEN_H) - 0.5)),
				.roll = 0
				}));
		print_vector(quat_to_vec(rot_to_quat((t_rotation){
				.yaw = deg_to_rad(HORIZONTAL_FOV * (((double)x / SCREEN_W) - 0.5)),
				.pitch = deg_to_rad(VERTICAL_FOV * (((double)y / SCREEN_H) - 0.5)),
				.roll = 0
				})));
		printf("Length: %f\n", vec_length((quat_to_vec(rot_to_quat((t_rotation){
				.yaw = deg_to_rad(HORIZONTAL_FOV * (((double)x / SCREEN_W) - 0.5)),
				.pitch = deg_to_rad(VERTICAL_FOV * (((double)y / SCREEN_H) - 0.5)),
				.roll = 0
				})))));
	}
	return (0);
}
