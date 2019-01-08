/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conoel <conoel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 12:42:31 by conoel            #+#    #+#             */
/*   Updated: 2019/01/08 12:50:40 by conoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void		rotate(t_elem **last)
{
	*last = (*last)->next;
}

void		double_rotate(t_elem **last_a, t_elem **last_b)
{
	*last_a = (*last_a)->next;
	*last_b = (*last_b)->next;
}
