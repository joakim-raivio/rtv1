/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   canvas_to_viewport.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:45:18 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/11 16:46:30 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "options.h"
#include "camera.h"

t_vector	canvas_to_viewport(int x, int y)
{
	return (vec_rotate(get_camera()->forward,
				(t_rotation){
				.yaw = deg_to_rad(HORIZONTAL_FOV * (((double)x / SCREEN_W) - 0.5)),
				.pitch = deg_to_rad(VERTICAL_FOV * (((double)y / SCREEN_H) - 0.5)),
				.roll = 0
				}));
}
