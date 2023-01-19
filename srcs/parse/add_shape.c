/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_shape.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:37:05 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/19 19:39:34 by jraivio          ###   ########.fr       */
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

	if (ft_splitsize(fields) < P_SHAPESIZE || shape_count >= MAX_SHAPES)
		return ;
	add_object(fields, &(get_scene()->shapes[shape_count]));
	get_scene()->shapes[shape_count].object.scale = (t_vector){
		.x = ft_atod(fields[P_SCALEX]),
		.y = ft_atod(fields[P_SCALEY]),
		.z = ft_atod(fields[P_SCALEZ])
		};
	get_scene()->shapes[shape_count].color = (t_color){
		.red = ft_atod(fields[P_RED]),
		.green = ft_atod(fields[P_GREEN]),
		.blue = ft_atod(fields[P_BLUE]),
		.alpha = ft_atod(fields[P_ALPHA]),
		.brightness = ft_atod(fields[P_BRIGHTNESS])
		};
	shape_count++;
}
