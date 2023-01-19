/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:59:11 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/19 19:49:56 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"
#include "object.h"
#include "camera.h"
#include "scene.h"
#include "libft.h"
#include <stdlib.h>
#include <fcntl.h>
#include "parse_format.h"

void	placeholder_objects(void)
{
	get_scene()->shapes[0].object.type = sphere;
	get_scene()->shapes[0].object.scale = (t_vector){.x = 3, .y = 1, .z = 1};
	get_scene()->shapes[0].object.location = (t_vector){.x = 0, .y = 0, .z = 20};
	get_scene()->shapes[0].color = (t_color){.red = 1, .green = 0.1, .blue = 0.1, .brightness = 0.75};

	get_scene()->shapes[1].object.type = sphere;
	get_scene()->shapes[1].object.scale = (t_vector){.x = 1, .y = 1, .z = 1};
	get_scene()->shapes[1].object.location = (t_vector){.x = 4, .y = 4, .z = 15};
	get_scene()->shapes[1].color = (t_color){.red = 0.1, .green = 1, .blue = 0.1, .brightness = 0.5};

	get_scene()->shapes[2].object.type = sphere;
	get_scene()->shapes[2].object.scale = (t_vector){.x = 1, .y = 1, .z = 1};
	get_scene()->shapes[2].object.location = (t_vector){.x = -3, .y = 0, .z = 10};
	get_scene()->shapes[2].color = (t_color){.red = 0.1, .green = 0.1, .blue = 1, .brightness = 1};

	get_scene()->shapes[3].object.type = plane;
	get_scene()->shapes[3].object.scale = (t_vector){.x = 1, .y = 1, .z = 1};
	get_scene()->shapes[3].object.location = (t_vector){.x = -3, .y = -5, .z = 100};
	get_scene()->shapes[3].color = (t_color){.red = 0.8, .green = 0.8, .blue = 0.8, .brightness = 1};
	set_object_rotation(rot_to_quat((t_rotation)
			{.yaw = deg_to_rad(0), .pitch = deg_to_rad(90), .roll = deg_to_rad(0)}),
			&(get_scene()->shapes[3]));

	get_scene()->shapes[4].object.type = plane;
	get_scene()->shapes[4].object.scale = (t_vector){.x = 1, .y = 1, .z = 1};
	get_scene()->shapes[4].object.location = (t_vector){.x = -3, .y = -3, .z = 50};
	get_scene()->shapes[4].color = (t_color){.red = 0.0, .green = 1, .blue = 0.0, .brightness = 0.75};
	set_object_rotation(rot_to_quat((t_rotation)
			{.yaw = deg_to_rad(0), .pitch = deg_to_rad(0), .roll = deg_to_rad(0)}),
			&(get_scene()->shapes[4]));

	get_scene()->shapes[5].object.type = cylinder;
	get_scene()->shapes[5].object.scale = (t_vector){.x = 6, .y = 1, .z = 1};
	get_scene()->shapes[5].object.location = (t_vector){.x = -10, .y = 0, .z = 30};
	get_scene()->shapes[5].color = (t_color){.red = 0.7, .green = 0.7, .blue = 0.0, .brightness = 0.75};
	set_object_rotation(rot_to_quat((t_rotation)
			{.yaw = deg_to_rad(0), .pitch = deg_to_rad(45), .roll = deg_to_rad(45)}),
			&(get_scene()->shapes[5]));

	get_scene()->shapes[6].object.type = cone;
	get_scene()->shapes[6].object.scale = (t_vector){.x = 2, .y = 1, .z = 1};
	get_scene()->shapes[6].object.location = (t_vector){.x = 10, .y = 0, .z = 30};
	get_scene()->shapes[6].color = (t_color){.red = 1, .green = 0.5, .blue = 0.5, .brightness = 0.75};
	set_object_rotation(rot_to_quat((t_rotation)
			{.yaw = deg_to_rad(0), .pitch = deg_to_rad(0), .roll = deg_to_rad(0)}),
			&(get_scene()->shapes[6]));

//	get_scene()->lights[0].object.location.x = 0;
//	get_scene()->lights[0].object.location.y = 2;
//	get_scene()->lights[0].object.location.z = 15;
//	get_scene()->lights[0].intensity = 0.7;

//	get_scene()->lights[1].object.location.x = -100;
//	get_scene()->lights[1].object.location.y = 100;
//	get_scene()->lights[1].object.location.z = 0;
//	get_scene()->lights[1].intensity = 0.1;
//	get_camera()->location = (t_vector){.x = 0, .y = 100, .z = 0.1};
//	set_object_rotation(rot_to_quat((t_rotation)
//			{.yaw = deg_to_rad(0), .pitch = deg_to_rad(90), .roll = deg_to_rad(0)}),
//			get_camera());
}

void	parse_line(char *line)
{
	char			**fields;
	t_object_type	type;

	fields = ft_strsplit(line, ',');
	if (!fields)
		return ;
	type = str_to_type(fields[P_TYPE]);
	if (type == camera)
		add_camera(fields);
	else if (type == light)
		add_light(fields);
	else if (type > light)
		add_shape(fields);
	ft_freearray(&fields, ft_countwords(line, ','));
}

void	parse(char *file)
{
	int		fd;
	char	*line;

	fd = open(file, O_RDONLY);
	if (!fd || fd < 0)
		ft_panic("Error opening file");
	while (get_next_line(fd, &line))
	{
		parse_line(line);
		free(line);
	}
	free(line);
	close(fd);
	//placeholder_objects();
}
