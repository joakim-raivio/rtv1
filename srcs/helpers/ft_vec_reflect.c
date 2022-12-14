/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_substract.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:59:54 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/02 16:47:58 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_vec	ft_vec_substract(t_vec first, t_vec second)
{
	return (
		(t_vec){.x = first.x - second.x,
		.y = first.y - second.y,
		.z = first.z - second.z});
}
