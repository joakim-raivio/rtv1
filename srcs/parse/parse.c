/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:59:11 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/14 17:11:04 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

void	parse(void)
{
	get_scene()->shapes[0].type = sphere;
	get_scene()->shapes[0].scale = (t_vector){.x = 1, .y = 1, .z = 1};
	get_scene()->lights[0].location.x = 10000;
	get_scene()->lights[0].location.y = 10000;
	get_camera()->location.x = 10;
	get_camera()->rotation.x = -1;
}
