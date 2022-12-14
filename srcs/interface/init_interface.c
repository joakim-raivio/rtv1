/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_interface.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:22:53 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/14 16:52:29 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"
#include "rt_mlx.h"
#include "interface.h"

void	init_interface(void)
{
	mlx_hook(get_frame()->window, ON_KEY_DOWN, 0, key_pressed, 0);
	mlx_hook(get_frame()->window, ON_KEY_UP, 0, key_released, 0);
}
