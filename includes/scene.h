/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:43:03 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/23 01:20:07 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCENE_H
# define SCENE_H
# include "shape.h"
# include "light.h"
# include "options.h"

typedef struct s_scene
{
	t_light	lights[MAX_LIGHTS];
	t_shape	shapes[MAX_SHAPES];
}	t_scene;

t_scene	*get_scene(void);

#endif
