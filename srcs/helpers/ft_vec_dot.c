/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_dot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:30:18 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/02 17:35:53 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_vec_dot(t_vec first, t_vec second)
{
	return(first.x * second.x + first.y * second.y + first.z * second.z);
}
