/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   canvas_to_viewport.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:45:18 by jraivio           #+#    #+#             */
/*   Updated: 2023/03/16 08:20:33 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"
#include "options.h"
#include "camera.h"

/*
 * Naive implementation for getting an angle for a ray casted from the camera.
*/

t_vector	canvas_to_viewport(int x, int y)
{
	return (get_quat_forward(quat_product(get_camera()->rotation,
				rot_to_quat((t_rotation){
					.yaw = deg_to_rad(HORIZONTAL_FOV
						* (((double)x / SCREEN_W) - 0.5)),
					.pitch = deg_to_rad(VERTICAL_FOV
						* (((double)y / SCREEN_H) - 0.5)),
					.roll = 0
				}))));
}
