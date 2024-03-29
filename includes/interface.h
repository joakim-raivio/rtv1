/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:40:21 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/09 16:04:16 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERFACE_H
# define INTERFACE_H
# define ON_KEY_DOWN 2
# define ON_KEY_UP 3
# define ON_MOUSE_MOVE 6
# define KEY_ESC 53

void	init_interface(void);
int		key_pressed(int key_code);
int		key_released(int key_code);

#endif
