/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:59:11 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/22 20:44:36 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

void	parse(void)
{
	get_scene()->shapes[0].object.type = sphere;
	get_scene()->shapes[0].object.scale = (t_vector){.x = 50, .y = 1, .z = 1};
	get_scene()->shapes[0].object.location = (t_vector){.x = 0, .y = 510, .z = 0};
	get_scene()->shapes[0].color = (t_color){.red = 1, .green = 0, .blue = 0, .brightness = 1};
	get_scene()->shapes[1].object.type = sphere;
	get_scene()->shapes[1].object.scale = (t_vector){.x = 5, .y = 1, .z = 1};
	get_scene()->shapes[1].object.location = (t_vector){.x = 20, .y = 100, .z = 0};
	get_scene()->shapes[1].color = (t_color){.red = 0, .green = 1, .blue = 0, .brightness = 0.5};
	get_scene()->shapes[2].object.type = sphere;
	get_scene()->shapes[2].object.scale = (t_vector){.x = 5, .y = 1, .z = 1};
	get_scene()->shapes[2].object.location = (t_vector){.x = -20, .y = 100, .z = 0};
	get_scene()->shapes[2].color = (t_color){.red = 0, .green = 0, .blue = 1, .brightness = 1};
	get_scene()->lights[0].location.x = 10000;
	get_scene()->lights[0].location.y = 10000;
	get_camera()->location = (t_vector){.x = 0, .y = 0, .z = 0};
	get_camera()->rotation = rot_to_vec((t_rotation)
			{.yaw = deg_to_rad(0), .pitch = -deg_to_rad(0), .roll = 0});
}
