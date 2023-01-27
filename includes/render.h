/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:53:23 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/27 19:00:22 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RENDER_H
# define RENDER_H
# include "rt_mlx.h"
# include "math3d.h"

void		screenloop(void);
t_vector	canvas_to_viewport(int x, int y);

#endif
