/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_mlx.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:01:24 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/14 16:17:05 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_MLX_H
# define RT_MLX_H
#include <mlx.h>

typedef struct s_img {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_img;

typedef struct s_frame
{
	void	*mlx;
	void	*window;
}	t_frame;

t_frame	*get_frame(void);


#endif
