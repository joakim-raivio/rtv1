/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_scene.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:00:57 by jraivio           #+#    #+#             */
/*   Updated: 2022/11/23 15:13:44 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scene.h"

t_scene	*get_scene(void)
{
	static t_scene scene;

	return (&scene);
}