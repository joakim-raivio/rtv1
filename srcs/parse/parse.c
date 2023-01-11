/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:59:11 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/11 20:17:04 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"
#include "object.h"
#include "camera.h"
#include "scene.h"

void	parse(void)
{
	get_scene()->shapes[0].object.type = sphere;
	get_scene()->shapes[0].object.scale = (t_vector){.x = 3, .y = 1, .z = 1};
	get_scene()->shapes[0].object.location = (t_vector){.x = 0, .y = 0, .z = 20};
	get_scene()->shapes[0].color = (t_color){.red = 1, .green = 0.1, .blue = 0.1, .brightness = 1};
	get_scene()->shapes[1].object.type = sphere;
	get_scene()->shapes[1].object.scale = (t_vector){.x = 1, .y = 1, .z = 1};
	get_scene()->shapes[1].object.location = (t_vector){.x = 3, .y = 0, .z = 10};
	get_scene()->shapes[1].color = (t_color){.red = 0.1, .green = 1, .blue = 0.1, .brightness = 0.5};
	get_scene()->shapes[2].object.type = sphere;
	get_scene()->shapes[2].object.scale = (t_vector){.x = 1, .y = 1, .z = 1};
	get_scene()->shapes[2].object.location = (t_vector){.x = -3, .y = 0, .z = 10};
	get_scene()->shapes[2].color = (t_color){.red = 0.1, .green = 0.1, .blue = 1, .brightness = 1};
	get_scene()->lights[0].object.location.x = 10000;
	get_scene()->lights[0].object.location.y = 10000;
	get_scene()->lights[0].object.location.z = -10000;
	get_scene()->lights[0].intensity = 0.75;
	get_camera()->location = (t_vector){.x = 0, .y = 15, .z = 0};
	set_object_rotation(rot_to_quat((t_rotation)
			{.yaw = deg_to_rad(0), .pitch = deg_to_rad(45), .roll = deg_to_rad(0)}),
			get_camera());
}
