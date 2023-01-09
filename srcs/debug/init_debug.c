/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_debug.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:02:30 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/09 16:09:09 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"
#include "rt_mlx.h"
#include "interface.h"

void	init_debug(void)
{
	mlx_hook(get_frame()->window, ON_MOUSE_MOVE, 0x40, mouse_inspect, NULL);
}
