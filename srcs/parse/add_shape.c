/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_shape.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:37:05 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/24 16:51:50 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse_format.h"
#include "scene.h"
#include "libft.h"
#include "parse.h"
#include "options.h"

void	add_shape(char **fields)
{
	static int	shape_count = 0;
	t_vector	scale_input;
	t_color		color_input;

	if (ft_splitsize(fields) < P_SHAPESIZE || shape_count >= MAX_SHAPES)
		return ;
	add_object(fields, &(get_scene()->shapes[shape_count]));
	scale_input.x = ft_atod(fields[P_SCALEX]);
	scale_input.y = ft_atod(fields[P_SCALEY]);
	scale_input.z = ft_atod(fields[P_SCALEZ]);
	get_scene()->shapes[shape_count].object.scale = scale_input;
	color_input.red = ft_atod(fields[P_RED]);
	color_input.green = ft_atod(fields[P_GREEN]);
	color_input.blue = ft_atod(fields[P_BLUE]);
	color_input.alpha = ft_atod(fields[P_ALPHA]);
	color_input.brightness = ft_atod(fields[P_BRIGHTNESS]);
	get_scene()->shapes[shape_count].color = color_input;
	shape_count++;
}
