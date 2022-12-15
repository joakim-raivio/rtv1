/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:59:11 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/15 23:22:07 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

void	parse(void)
{
	get_scene()->shapes[0].type = sphere;
	get_scene()->shapes[0].scale = (t_vector){.x = 1, .y = 1, .z = 1};
	get_scene()->shapes[0].location = (t_vector){.x = 0, .y = 100, .z = 0};
	get_scene()->shapes[1].type = sphere;
	get_scene()->shapes[1].scale = (t_vector){.x = 1, .y = 1, .z = 1};
	get_scene()->shapes[1].location = (t_vector){.x = 0, .y = 500, .z = 50};
	get_scene()->lights[0].location.x = 10000;
	get_scene()->lights[0].location.y = 10000;
	get_camera()->location.y = 0;
	get_camera()->rotation = rot_to_vec((t_rotation)
			{.yaw = deg_to_rad(0), .pitch = deg_to_rad(0), .roll = 0});
}
