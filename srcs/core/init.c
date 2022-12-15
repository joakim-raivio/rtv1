/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:46:04 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/14 16:45:06 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt_mlx.h"
#include "rt.h"
#include "camera.h"
#include "scene.h"
#include "interface.h"

void	init_getters(void)
{
	ft_bzero(get_frame(), sizeof(t_frame));
	ft_bzero(get_camera(), sizeof(t_object));
	ft_bzero(get_scene(), sizeof(t_scene));
}

void	init_mlx(void)
{
	get_frame()->mlx = mlx_init();
	if (!(get_frame()->mlx))
		ft_panic("MLX initilization failed.");
	get_frame()->window = mlx_new_window(get_frame()->mlx,
		SCREEN_W, SCREEN_H, WINDOW_NAME);
	if (!(get_frame()->window))
		ft_panic("MLX window initialization failed.");
}

void	init(void)
{
	init_getters();
	init_mlx();
	init_interface();
}
