/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_mlx.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:01:24 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/15 20:00:28 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_MLX_H
# define RT_MLX_H
# include <mlx.h>
# define SCREEN_W 800
# define SCREEN_H 600
# define WINDOW_NAME "RT"

typedef struct s_image
{
	void	*image;
	char	*address;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}			t_image;

typedef struct s_frame
{
	void	*mlx;
	void	*window;
}	t_frame;

t_frame	*get_frame(void);
t_image	*get_image(void);
void	add_pixel(t_image *image, long x, long y, unsigned int color);

#endif
