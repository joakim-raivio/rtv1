/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:43:03 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/15 21:55:33 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCENE_H
# define SCENE_H
# include "object.h"
# include "options.h"

typedef struct s_scene
{
	t_object	lights[MAX_LIGHTS];
	t_object	shapes[MAX_SHAPES];
}	t_scene;

t_scene	*get_scene(void);

#endif
