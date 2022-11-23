/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:43:03 by jraivio           #+#    #+#             */
/*   Updated: 2022/11/23 15:13:10 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCENE_H
# define SCENE_H
# define MAX_LIGHTS 4
# define MAX_SHAPES 10
#include "object.h"

typedef struct s_scene
{
	t_object	lights[MAX_LIGHTS];
	t_object	shapes[MAX_SHAPES];
}	t_scene;

t_scene	*get_scene(void);

#endif
